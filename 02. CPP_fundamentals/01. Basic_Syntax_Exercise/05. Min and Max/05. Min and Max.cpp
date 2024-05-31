#include <iostream>
#include <limits.h>

int main()
{
    int n;
    std::cin >> n;
	int min = INT_MAX;
	int max = INT_MIN;

	for (int i = 1; i <= n; i++)
	{
		int number;
		std::cin >> number;

		if (number > max)
		{
			max = number;
		}

		if (number < min)
		{
			min = number;
		}

	}

	std::cout << min << " " << max;
}

