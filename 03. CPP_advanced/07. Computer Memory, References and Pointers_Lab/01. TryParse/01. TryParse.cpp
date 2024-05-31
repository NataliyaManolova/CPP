#include <iostream>

bool parse(const char* number, int& digit)
{
    int result = 0;

    while (*number >= '0' && *number <= '9')
    {
        result *= 10;
        result += (*number) - '0';
        number++;
    }

    if (*number == '\0')
    {
        digit = result;
        return true;
    }

    return false;
}

int main()
{
    std::string aStr, bStr;
    std::cin >> aStr >> bStr;

    int a, b;

    bool aResult = parse(aStr.c_str(), a);
    bool bResult = parse(bStr.c_str(), b);

    if (aResult && bResult)
    {
        std::cout << a + b << std::endl;
    }
    else
    {
        if (!aResult)
            std::cout << "[error] ";
        std::cout << aStr << std::endl;

        if (!bResult)
            std::cout << "[error] ";
        std::cout << bStr << std::endl;
    }

    return 0;
}