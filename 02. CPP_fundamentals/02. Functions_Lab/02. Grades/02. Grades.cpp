#include<iostream>

std::string gradeFunction(double a)
{
	std::string result;

	if (a >= 2 && a <= 2.99)
	{
		result = "Fail";
	}
	else if (a <= 3.49)
	{
		result = "Poor";
	}
	else if (a <= 4.49)
	{
		result = "Good";
	}
	else if (a <= 5.49)
	{
		result = "Very good";
	}
	else if (a <= 6.00)
	{
		result = "Excellent";
	}

	return result;
}

int main() {

	double grade;
	std::cin >> grade;

	std::cout << gradeFunction(grade);

}