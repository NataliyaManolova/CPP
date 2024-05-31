#include <iostream>

int main()
{
    int number = 0;
    std::cin >> number;

    int allEven = 0;
    int allOdd = 0;

    while (number)
    {
        int singleNumber = number % 10;

        if (singleNumber % 2)
        {
            allOdd += singleNumber;
        }
        else
        {
            allEven += singleNumber;
        }

        number = number / 10;
    }

    std::cout << allOdd * allEven << std::endl;
}

