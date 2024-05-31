#include <iostream>
#include <queue>
#include <climits>

//Работим с queue. В тази задача биват дадени цяло число, представляващо броя на елементите за добавяне, цяло число, представляващо броя на елементите, които да се премахнат от опашката, и накрая цяло число, елемент, който трябва да се намери в опашката. На нов ред се изписва опашката от числа. Ако числото, което се търси, бъде намерено, се отпечавата true на конзолата, а ако не, се отпечатва най-малкото число. Ако няма елементи в queue се отпечатва 0.

int main()
{
	int numbersToPush, numbersToPop, numberToFind;
	std::cin >> numbersToPush >> numbersToPop >> numberToFind;

	std::queue <int> allNum;

	while (numbersToPush--)
	{
		int number;
		std::cin >> number;
		allNum.push(number);
	}

	if (numbersToPop <= allNum.size())
	{
		while (numbersToPop--)
		{
			allNum.pop();
		}
	}
	else
	{
		std::cout << "not enough numbers to pop" << std::endl;
		return 0;
	}

	if (allNum.empty())
	{
		std::cout << "0" << std::endl;
	}
	else
	{
		int minNum = INT_MAX;

		while (allNum.size())
		{
			int curNum = allNum.front();
			allNum.pop();

			if (curNum == numberToFind)
			{
				std::cout << "true" << std::endl;
				return 0;
			}
			else if (minNum >= curNum)
			{
				minNum = curNum;
			}
		}

		std::cout << minNum << std::endl;
	}

	return 0;
}