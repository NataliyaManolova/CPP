#include <iostream>

void triangle(int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << j << " ";

        }

        std::cout << std::endl;

    }

    int newNumber = a - 1;

    for (int i = newNumber; i >= 1; --i)
    {

        for (int j = 1; j <= i; ++j)
        {
            std::cout << j << " ";
        }

        std::cout << std::endl;
    } 
}

int main()
{
    int number;

    std::cin >> number;

    triangle(number);
}