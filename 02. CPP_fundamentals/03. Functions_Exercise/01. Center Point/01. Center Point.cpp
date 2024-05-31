#include <iostream>

int main()
{
    double x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0;
    std::cin >> x1 >> y1 >> x2 >> y2;

    double firstc2 = x1 * x1 + y1 * y1; //хипотенуза c*c = a*a + b*b; 
    double secondc2 = x2 * x2 + y2 * y2;

    if (firstc2 <= secondc2)
    {
        std::cout << "(" << x1 << ", " << y1 << ")" << std::endl;
    }
    else if (firstc2 > secondc2)
    {
        std::cout << "(" << x2 << ", " << y2 << ")" << std::endl;
    }

}

