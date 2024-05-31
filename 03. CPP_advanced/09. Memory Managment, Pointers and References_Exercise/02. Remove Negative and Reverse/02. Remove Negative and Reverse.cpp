#include <iostream>
#include <stack>
#include <sstream>

int main()
{
    std::string line;
    std::getline(std::cin, line);

    std::istringstream stream(line);
    int num;

    std::stack<int> allNum;

    while (stream >> num)
    {
        if (num >= 0)
        {
            allNum.push(num);
        }
    }

    if (allNum.empty())
    {
        std::cout << "empty" << std::endl;
    }
    else
    {
        while (allNum.size())
        {
            std::cout << allNum.top() << " ";
            allNum.pop();
        }

        std::cout << std::endl;
    }

    return 0;
}