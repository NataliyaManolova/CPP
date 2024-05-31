#include <iostream>

int rectangleArea(int a, int b)
{
    int area = a * b;

    return area;
}

int main()
{
    int a, b;
    std::cin >> a >> b;

    std::cout << rectangleArea(a, b);
}