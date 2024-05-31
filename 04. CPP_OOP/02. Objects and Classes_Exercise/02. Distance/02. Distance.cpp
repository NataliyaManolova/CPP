#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>

class Point
{
    typedef int Coord;

    Coord x = 0, y = 0;

public:
    Point() {};

    Point(std::istream& istr)
    {
        istr >> x >> y;
    }

    double eucledianDistance(const Point& other);
}; 

double Point::eucledianDistance(const Point& other)
{
    double dx = this->x - other.x;
    double dy = this->y - other.y;

    return sqrt(dx * dx + dy * dy);
}

int main()
{
    Point p1(std::cin);
    Point p2(std::cin);

    std::cout << std::fixed << std::setprecision(3) << p1.eucledianDistance(p2) << std::endl;

}