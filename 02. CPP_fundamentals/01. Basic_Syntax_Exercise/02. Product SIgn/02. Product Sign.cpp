#include <iostream>

int main()
{
	float firstNumber = 0.0f;
	float secondNumber = 0.0f;
	float thirdNumber = 0.0f;

	std::cin >> firstNumber >> secondNumber >> thirdNumber;

	int countNegativeNum = 0;


	if (firstNumber == 0.0f || secondNumber == 0.0f || thirdNumber == 0.0f)
	{
		std::cout << "+" << std::endl;

		return 0;
	}

	if (firstNumber < 0)
	{
		countNegativeNum++;
	}
	if (secondNumber < 0)
	{
		countNegativeNum++;
	}
	if (thirdNumber < 0)
	{
		countNegativeNum++;
	}


	if (countNegativeNum % 2 == 0)
	{
		std::cout << "+" << std::endl;
	}
	else
	{
		std::cout << "-" << std::endl;
	}


}



