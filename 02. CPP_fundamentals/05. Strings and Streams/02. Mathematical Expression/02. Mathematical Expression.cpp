#include <iostream>
#include <sstream>

//проверява дали скобите са сложени правилно, като в случая за правилно се смята, ако скобите са четен брой и неправилно, ако са нечетен брой

int main()
{
    std::string str;
    getline(std::cin, str);

    std::istringstream stream(str);
    char c;
    int bracket = 0;

    while (stream >> c)
    {
        switch (c) 
        {
        case '(': bracket++; break;
        case ')': bracket--; break;
        }

        /*if (c == '(' || c == ')')
            bracket++;*/
    }

    std::cout << (bracket == 0 ? "correct" : "incorrect") << std::endl;
    //std::cout << (bracket % 2 == 0 ? "correct" : "incorrect") << std::endl;

    return 0;
}