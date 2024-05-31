#include <iostream>
#include <math.h>

int main()
{
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;

    std::cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0)
    {
        std::cout << "no roots" << std::endl;

    }
    else if (discriminant == 0)
    {
        double x = -b / (2 * a);

        std::cout << x << std::endl;
    }
    else if (discriminant > 0)
    {
        double x1 = (-b + std::sqrt(b * b - 4 * a * c)) / (2 * a);
        double x2 = (-b - std::sqrt(b * b - 4 * a * c)) / (2 * a);

        std::cout << x1 << " " << x2 << std::endl;
    }

    return 0;

}

