#include <iostream>
#include <stdio.h>
#include <string.h>

const size_t N = 1000;

void do_and_print(char* buffer, size_t len, int (*function)(int))
{
    for (size_t idx = 0; idx < len; idx++)
        buffer[idx] = function(buffer[idx]);

    std::cout << buffer << std::endl;
}

int main()
{
    char* str = new char[N];
    size_t cur = 0;

    std::cin.get(str, N); //взима и whitespace
    size_t strLength = strlen(str); //големината на стринга

    do_and_print(str, strLength, tolower);
    do_and_print(str, strLength, toupper);

    delete[] str;

    return 0;
}