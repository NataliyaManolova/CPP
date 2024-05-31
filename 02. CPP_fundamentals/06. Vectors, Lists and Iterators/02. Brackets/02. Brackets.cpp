#include<iostream>
#include<string>
#include<sstream>
#include<list>

// трябва да се провери дали е валидна или невалидна поредицата от скоби. Недалидна е, ако преди '{' има '[' или '(', ако преди '[' има '(', или ако на всяка отваряща скоба не съответства затваряща от същия вид

std::list <char> brackets;

bool iscurvedBrtacketAllowed() // '('
{
	return true;
}

bool isSquareBracketAllowed() // '['
{
	if (brackets.size() == 0)
	{
		return true;
	}

	std::list <char>::iterator itB = brackets.end();
	itB--;

	while (true)
	{
		if (*itB == '(')
			return false;

		if (itB == brackets.begin())
			break;

		itB--;
	}

	return true;
}

bool isCurlyBracketAllowed() // '{'
{
	if (brackets.size() == 0)
		return true;

	std::list<char>::iterator itB = brackets.end();
	itB--;

	while (true)
	{
		if (*itB == '(' || *itB == '[')
			return false;

		if (itB == brackets.begin())
			break;

		itB--;
	}

	return true;
}

bool isOpenBracketAllowed(char bracket)
{
	switch (bracket)
	{
	case '(': return iscurvedBrtacketAllowed();
	case '[': return isSquareBracketAllowed();
	case '{': return isCurlyBracketAllowed();
	default: return false;
	}

	return true;
}

bool closingBracket(char bracket)
{
	if (brackets.size() == 0)
		return false;

	char back = brackets.back(); //записваме последната отваряща скоба в променливата back. В brackets записвамe само отварящите скоби и кoгато се появи затвaряща скоба която да съответства на отварящата, изтривамe отварящата скоба от list. Затварящата скоба не я записваме никога.
	brackets.pop_back(); // тук изтриваме последната отварящата се скоба от поредицата скоби, след като вече сме я записали в back

	if (bracket == ')' && back == '(')
		return true;

	if (bracket == ']' && back == '[')
		return true;

	if (bracket == '}' && back == '{')
		return true;

	return false;
}

bool isCorrectSequence(const std::string& line)
{
	for (char buf : line)
	{
		switch (buf)
		{
		case '(':
		case '[':
		case '{':

			if (!isOpenBracketAllowed(buf))
				return false;

			brackets.push_back(buf); //записваме отварящата скоба
			break;

		case ')':
		case ']':
		case '}':

			if (!closingBracket(buf))
				return false;
			                        // но не записваме затварящата скоба
			break;

		default: return false;
		}

	}

	return true;
}

int main() {

	std::string line;
	std::cin >> line;

	std::cout << (isCorrectSequence(line) ? "valid" : "invalid") << std::endl;

	return 0;
}