#include <iostream>
#include <vector>
#include <sstream>

int main()
{
    std::string line;
    std::getline(std::cin, line);

    std::istringstream stream(line);

    std::vector <int> numbers;
    int curNum;

    while (stream >> curNum)
    {
        numbers.push_back(curNum);
    }

    int maxIteration = numbers.size() / 2;

    for (int cur = 0; cur < maxIteration; cur++)
    {
        std::cout << numbers[cur] + numbers[numbers.size() - 1 - cur] << " ";
    }

    if (numbers.size() % 2)
        std::cout << numbers[maxIteration];
    
    std::cout << std::endl;

    return 0;
}