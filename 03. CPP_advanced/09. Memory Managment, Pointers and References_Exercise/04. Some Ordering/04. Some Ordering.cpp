#include <iostream>
#include <stdio.h>
#include <string.h>

const size_t N = 1000;

int main()
{
    char* str = new char[N];
    size_t cur = 0;

    std::cin.get(str, N); //взима и whitespace
    size_t strLength = strlen(str); //големината на стринга

    for (size_t idx = 0; idx < strLength; idx++)
    {
        str[idx] = tolower(str[idx]);
    }

    std::cout << str << std::endl;

    for (size_t idx = 0; idx < strLength; idx++)
    {
        str[idx] = toupper(str[idx]);
    }

    std::cout << str << std::endl;

    delete[] str;

    return 0;
}