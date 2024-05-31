#include <iostream>
#include <queue>
#include <sstream>

// отпечатват се само четните числа от queue

int main()
{
    std::string lineOfNum;
    std::getline(std::cin, lineOfNum);

    std::istringstream stream(lineOfNum);

    std::queue<int> evenNumbers;

    int cur;

    while (stream >> cur)
    {
        evenNumbers.push(cur);
    }

    while (!evenNumbers.empty())
    {
        int curNum = evenNumbers.front();

        if (curNum % 2 == 0)
        {
            std::cout << evenNumbers.front();

            if (evenNumbers.size() != 1)
            {
                std::cout << ", ";
            }
        }

        evenNumbers.pop();
    }
    std::cout << std::endl;

    return 0;
}