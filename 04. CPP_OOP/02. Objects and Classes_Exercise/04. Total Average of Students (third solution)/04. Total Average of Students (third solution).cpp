#include <iostream>
#include <sstream>
#include <vector>

class Student
{
    std::string name;
    std::string surname;
    double average = 0;

public:
    Student() : average(0) {};
    Student(std::istream& istr);

    double getAverage(void) { return average; }

    std::string print(void);
};

Student::Student(std::istream& istr)
{
    std::getline(istr, name);
    std::getline(istr, surname);
    istr >> average; istr.ignore();
}

std::string Student::print(void)
{
    std::ostringstream ostr;

    ostr << name << ' ' << surname << ' ' << average;

    return ostr.str();
}

int main()
{
    int studentsNum;
    std::cin >> studentsNum; std::cin.ignore();

    if (studentsNum <= 0)
    {
        std::cout << "Invalid input" << std::endl;
        return 0;
    }

    std::ostringstream ostr;
    double totalAverage = 0;
    for (int curStudent = 0; curStudent < studentsNum; curStudent++)
    {
        Student s(std::cin);
        ostr << s.print() << std::endl;
        totalAverage += s.getAverage();
    }

    std::cout << ostr.str() << totalAverage / studentsNum << std::endl;

    return 0;
}