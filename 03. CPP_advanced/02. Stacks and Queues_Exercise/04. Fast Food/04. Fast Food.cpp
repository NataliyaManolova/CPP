#include <iostream>
#include <queue>
#include <sstream>
#include <climits>

//Имаме ресторант за бързо хранене. Ресторантът получава предвачителна доставка на готова храна, която след това предлага на клиентите. Трябва да се изчисли дали доставената храна ще бъде достатъчна да се изпълнят всички поръчки на клиентите и да се изчисли коя е най-голямата поръчка за деня.

int biggestOrder(std::queue <int> allOrders)
{
    int biggestOrder = INT_MIN;

    while (allOrders.size())
    {
        int curNum = allOrders.front();
        allOrders.pop();

        if (curNum > biggestOrder)
        {
            biggestOrder = curNum;
        }
    }

    return biggestOrder;
}

int main()
{
    std::queue <int> allOrders;

    int allQuantity;
    std::cin >> allQuantity;
    std::cin.ignore();

    std::string orders;
    std::getline(std::cin, orders);

    std::istringstream stream(orders);

    int curOrder;

    while (stream >> curOrder)
    {
        allOrders.push(curOrder);
    }

    int maxOrder = biggestOrder(allOrders);

    while (allOrders.size())
    {
        if (allQuantity >= allOrders.front())
        {
            allQuantity -= allOrders.front();
            allOrders.pop();
        }
        else
            break;
    }

    std::cout << maxOrder << std::endl;

    if (allOrders.size() == 0)
    {
        std::cout << "Orders complete" << std::endl;
    }
    else
    {
        std::cout << "Orders left: ";

            while (allOrders.size())
            {
                std::cout << allOrders.front() << ' ';
                allOrders.pop();
            }
    }

    return 0;
}