#include <iostream>
#include <set>
#include <sstream>

//числата трябва да се принтират във възходящ ред

int main()
{
	std::string line;
	std::getline(std::cin, line);

	std::istringstream stream(line);

	int number;

	std::multiset <int> allNum;

	while (stream >> number)
	{
		allNum.insert(number);
	}

	bool isFirst = true;

	for (int number : allNum)
	{
		if (isFirst)
			isFirst = false;
		else
			std::cout << " <= ";

		std::cout << number;
	}
	std::cout << std::endl;

	return 0;
}