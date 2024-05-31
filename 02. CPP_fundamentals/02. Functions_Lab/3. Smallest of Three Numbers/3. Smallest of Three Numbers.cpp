#include <iostream>

int smallestNumber(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    
    return b;
}


int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    std::cout << smallestNumber(smallestNumber(a, b), c);
}