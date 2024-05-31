#include <iostream>
#include <stack>
#include <climits>

int findMaxElement(std::stack <int> allNum)
{
    int maxElement = INT_MIN;

    while (allNum.size())
    {
        if (allNum.top() > maxElement)
        {
            maxElement = allNum.top();
        }

        allNum.pop();
    }

    return maxElement;
}

int findMinElement(std::stack <int> allNum)
{
    int minElement = INT_MAX;

    while (allNum.size())
    {
        if (allNum.top() < minElement)
        {
            minElement = allNum.top();
        }

        allNum.pop();
    }

    return minElement;
}

int main()
{
    int numberOfCommands;
    std::cin >> numberOfCommands;
    std::stack <int> allNum;

    while (numberOfCommands--)
    {
        int command;
        std::cin >> command;

        switch (command)
        {
        case 1:
            int newNum;
            std::cin >> newNum;
            allNum.push(newNum);
            break;

        case 2:
            if (allNum.size())
                allNum.pop();
            break;

        case 3:
            if (allNum.size())
                std::cout << findMaxElement(allNum) << std::endl;
            break;

        case 4:
            if (allNum.size())
                std::cout << findMinElement(allNum) << std::endl;
            break;
        }
    }

    bool firstNum = true;

    while (allNum.size())
    {
        if (!firstNum)
        {
            std::cout << ", ";
        }
        else
        {
            firstNum = false;
        }

        std::cout << allNum.top();
        allNum.pop();
    }
}