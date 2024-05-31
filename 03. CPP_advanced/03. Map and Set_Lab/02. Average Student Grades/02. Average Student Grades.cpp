#include <iostream>
#include <map>
#include <vector>
#include <iomanip>

//на конзолата се изписват няколко реда с имената на студентите и по една оценка на ред. Като името на студента може да се повтори с нова оценка срещу него. Трябва да се изчисли средния успех на всеки студент и да се напетата на конзолата срещу неговото име заедно с единичните му оценки.

int main()
{
    int students;
    std::cin >> students;

    std::map <std::string, std::vector<double>> allStudents;

    while (students--)
    {
        std::string name;
        std::cin >> name;
        
        double grade;
        std::cin >> grade;

        std::vector <double> &grades = allStudents[name];
        grades.push_back(grade);
    }

    std::cout << std::fixed << std::setprecision(2); //#include <iomanip>
    
    auto it = allStudents.begin();

    for (; it != allStudents.end(); it++)
    {
        std::cout << it->first << " -> ";

        double sumGrades = 0;

        std::vector <double>& grades = it->second;

        for (double grade : grades)
        {
            std::cout << grade << " ";

            sumGrades += grade;
        }

        std::cout << "(avg: " << sumGrades / grades.size() << ")" << std::endl;
    }

    return 0;
}
