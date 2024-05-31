#include <iostream>

double factoriel(int x)
{
    double result = 1;

    for (; x >= 2; x--)
    {
        result *= x;
    }

    return result;
}

int main()
{
    double x = 0, y = 0;
    std::cin >> x >> y;

    x = factoriel(x);
    y = factoriel(y);

    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);

    std::cout << x/y << std::endl;
}


//double factoriel(int x)
//{
//    double total = 1;
//    int counter = 0;
//
//    for (int i = 1; i <= x; i++)
//    {
//        counter++;
//        total *= counter;
//    }
//    return total;
//}
//
//int main()
//{
//    double x = 0, y = 0;
//        std::cin >> x >> y;
//    
//        x = factoriel(x);
//        y = factoriel(y);
//    
//        std::cout.setf(std::ios::fixed);
//        std::cout.precision(2);
//    
//        std::cout << x/y << std::endl;
//
//}