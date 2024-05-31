#include <iostream>

int addition(int a, int b)
{
    return a + b;
}

int substraction(int a, int b)
{
    return a - b;
}

int multiplication(int a, int b)
{
    return a * b;
}

void division(int a, int b)
{
    if (b == 0)
    {
        std::cout << "Can't divide by zero." << std::endl;
    }
    else
        std::cout << a / b << std::endl;
}

int main()
{
    int a = 0, b = 0;
    std::cin >> a >> b;
    char command;
    std::cin >> command;


    switch (command)
    {
    case '+': std::cout << addition(a, b); break;
    case '-': std::cout << substraction(a, b); break;
    case '*': std::cout << multiplication(a, b); break;
    case '/': division(a, b); break;
    }
}
