#include <iostream>

std::string PlusMinus(int num)
{
    std::string sign;
    if (num == 0)
    {
        sign = "is zero.";
    }
    
    if (num > 0)
    {
        sign = "is positive.";
    }

    if (num < 0)
    {
        sign = "is negative.";
    }

    return sign;
}

int main()
{
    int num = 0;
    std::cin >> num;

        std::cout << "The number " << num << ' ' << PlusMinus(num);

}