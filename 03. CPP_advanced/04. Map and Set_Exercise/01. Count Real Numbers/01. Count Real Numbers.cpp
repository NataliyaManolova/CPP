#include <iostream>
#include <map>
#include <sstream>

//трябва да се принтират числата във възходящ ред и да се сметне коло пъти се повтарят

int main()
{
    std::string line;
    std::getline(std::cin, line);

    std::istringstream stream(line);

    std::string number;

    std::map<std::string, int> allNumbers;

    while (stream >> number)
    {
        allNumbers[number]++;
    }

    for (std::pair<std::string, int> numbers : allNumbers)
    {
        std::cout << numbers.first << " -> " << numbers.second << std::endl;
    }

    return 0;
}