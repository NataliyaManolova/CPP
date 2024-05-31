#include <iostream>
#include <cmath>

void power(int a, int b)
{
    int power = pow(a, b);
    std::cout << power;
}

int main()
{
    int a, b;
    std::cin >> a >> b;

    power(a, b);
}