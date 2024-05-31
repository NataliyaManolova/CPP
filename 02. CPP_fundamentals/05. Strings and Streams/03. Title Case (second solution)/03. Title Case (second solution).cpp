#include<iostream>
#include<string>
#include<sstream>

//всяка дума в изречението да започва с главна буква

int main() {

	std::string str;
	std::getline(std::cin, str);
	std::istringstream stream(str);

	std::string oneWord;
	std::string concatinate;

	while (stream >> oneWord)
	{
		for (int i = 0; i < oneWord.length(); i++)
		{
			if (!(oneWord[i] >= 'a' && oneWord[i] <= 'z') && !(oneWord[i] >= 'A' && oneWord[i] <= 'Z')) //ако елемента е символ
			{
				if ((oneWord[i + 1] >= 'a' && oneWord[i + 1] <= 'z')) // само ако следващият елемент след символа е малка буква
					oneWord[i + 1] = toupper(oneWord[i + 1]);
			}
		}

		if (oneWord[0] >= 'a' && oneWord[0] <= 'z')
			oneWord[0] = toupper(oneWord[0]); // toupper прави малката буква в голяма, но не изменя голямата. Това е по-удобно от (oneWord[0] -= 32;), защото предотратява потенциална грешка в кода. Като например, ако бях включила и големите букви във if функцията, а не само малките.

			//oneWord[0] -= 32; // 32 = ' ' това е разликата между малка и голяма буква от един вид 'a' - 'A' (askii table)

		concatinate += oneWord + ' ';
	}

	std::cout << concatinate << std::endl;

	return 0;
}