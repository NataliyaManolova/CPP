#include <iostream>
#include <set>
#include <sstream>

//трябва да се принтират първите три най-големи числа. Ако има по-малко от 3 се принтират всичките.

int main()
{
    std::string line;
    std::getline(std::cin, line);

    std::istringstream stream(line);

    double numbers;

    std::set<double, std::greater<double>> allNum;

    while (stream >> numbers)
    {
        allNum.insert(numbers);
    }

    int count = 3;

        for (double number : allNum)
        {
            std::cout << number << " ";
            count--;
            
            if (count == 0)
                break;
        }
        std::cout << std::endl;

    return 0;
}