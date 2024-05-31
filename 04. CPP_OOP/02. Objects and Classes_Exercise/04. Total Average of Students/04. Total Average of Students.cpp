#include <iostream>
#include <sstream>
#include <map>
#include <iomanip>
#include <vector>

class Student
{
    std::map <std::string, double> info;
    std::vector <std::string> order;
    std::string name;
    std::string surname;
    double average = 0;
    double totalAverage = 0;

public:
    Student() {};

    Student(std::istream& istr, int count)
    {
        for (int i = 0; i < count; i++)
        {
            istr >> name >> surname >> average;
            auto it = info.find(name + " " + surname);

            if (it == info.end())
                order.push_back(name + " " + surname);

            info[name + " " + surname] = average;
            totalAverage += average;
        }

    }

    std::string getInfo()
    {
        std::ostringstream ostr;

        auto it = order.begin();
        for (; it != order.end(); it++)
        {
            ostr << *it << " " << info[*it] << std::endl;
        }

        return ostr.str();
    }

    double total(int count)
    { 
        totalAverage /= count;
        return totalAverage;
    }
};

int main()
{
    int count;
    std::cin >> count;

    if (count <= 0)
    {
        std::cout << "Invalid input" << std::endl;
        return 0;
    }

    Student ss(std::cin, count);

    std::cout << ss.getInfo();
    std::cout << ss.total(count);
}