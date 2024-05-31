#include <iostream>
#include <map>

//трябва да се намери, кое число се повтаря четен брой пъти. Ще има само едно такова число.

int main()
{
	int allNum;
	std::cin >> allNum;

	std::map <int, size_t> numbers;

	while (allNum--)
	{
		int number;
		std::cin >> number;
		
		numbers[number]++;
	}

	for (std::pair<int, size_t> number : numbers)
	{
		if (number.second % 2 == 0)
		{
			std::cout << number.first << std::endl; //по условие пише, че само едно число ще се повтаря четен брой пъти
			break;
		}
	}

	return 0;
}