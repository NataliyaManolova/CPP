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

typedef std::vector<Student> StudentData;

double calcTotalAverage(StudentData& students)
{
    double averageSum = 0;

    for (Student& student : students)
        averageSum += student.getAverage();

    return averageSum / students.size();
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

    StudentData data;
    data.reserve(studentsNum);

    while (studentsNum--)
    {
        data.push_back(Student(std::cin));
    }

    for (Student& student : data)
    {
        std::cout << student.print() << std::endl;
    }

    std::cout << calcTotalAverage(data) << std::endl;

    return 0;
}