#include <iostream>
#include <string>
#include "BigInt.h"

bool dividedBy45(const BigInt& c)
{
    std::string digits = c.getDigits();
    char lastDigit = digits.back();

    if (lastDigit != '5' && lastDigit != '0')
        return false;

    unsigned long sum = 0;
    for (char c : digits)
        sum += c - '0';

    if (sum % 9 != 0)
        return false;

    return true;
}

int main()
{
    std::string num1, num2;
    std::cin >> num1 >> num2;

    BigInt a(num1);
    BigInt b(num2);

    for (BigInt c = a; c < b; c += 1)
    {
        if (dividedBy45(c))
            std::cout << c << std::endl;
    }
}