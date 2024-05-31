#include <iostream>
#include <algorithm>
#include <set>
#include <sstream>
#include <cmath>

//трябва да се отпечатат само числата, които са точен квадрат. Например 9, защото 3*3 = 9. Трябва да е в низходящ ред.

bool isSquareNumber(int number)
{
	double newNum = sqrt(number);
	
	//trunc маха дробната част на числото. Така проверявам дали корен квадратен от числото е дробно или цяло число. Ако е дробно, значи числото не е точен квадрат.
	if (trunc(newNum) == newNum) 
		return true;

	return false;
}

int main()
{
	std::string line;
	std::getline(std::cin, line);

	std::istringstream stream(line);

	int number;

	std::multiset <int, std::greater<int>> allNum;

	while (stream >> number)
	{
		bool isSquare = isSquareNumber(number);

		if (isSquare)
		{
			allNum.insert(number);
		}
	}

	for (int number : allNum)
	{
		std::cout << number << " ";
	}
	std::cout << std::endl;

	return 0;
}