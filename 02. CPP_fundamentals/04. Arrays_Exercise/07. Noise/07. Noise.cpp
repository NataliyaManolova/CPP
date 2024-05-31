#include <iostream>
#include <cmath>

// -9abc.

// 3 => 0 + 10^0* 3
// 25 => 0 + 10^0* 5 + 10^1* 2
// 325 => 0 + 10^0* 5 + 10^1* 2 + 10^2*  3

// 3, 2, 5 => 325

// 0
// => 3 ---> 0*10 + 3 = 3
// => 2 ---> 3*10 + 2 = 32
// => 5 ---> 32*10 + 5 = 325
// . 

int main()
{
    int number = 0;

    while (true)
    {
        char c;
        std::cin >> c;

        if (c == '.')
        {
            break;
        }

        if (c >= '0' && c <= '9')
        {
            int value = c - 48;
            //int value = c - '0'; - превръщаме символа '0' в числото 0;
            //примерно ако е '9' - '0', през ASCII таблицата това е 57 - 48 = 9; => получаваме числото 9;

            number *= 10;
            number += value;
        }
    }

    std::cout << sqrt(number) << std::endl;

}

