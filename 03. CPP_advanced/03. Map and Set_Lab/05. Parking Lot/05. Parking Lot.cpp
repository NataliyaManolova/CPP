#include <iostream>
#include <set>

//входните данни са номерата на колите и команда in или out в зависимост от това дали дадената кола влиза или излиза от паркинга. Трябва да се напечата на конзолата кои коли са останали в паркинга, ако има такива.

int main()
{
    std::set <std::string> allCars;

    while (true)
    {
        std::string command, carNumber;
        std::cin >> command;

        if (command == "END")
            break;

        std::cin >> carNumber;

        if (command == "IN,")
        {
            allCars.insert(carNumber);
        }
        else if (command == "OUT,")
        {
            allCars.erase(carNumber);
        }
    }

    if (allCars.size())
    {
        for (std::string carNumber : allCars)
        {
            std::cout << carNumber << std::endl;
        }
    }
    else
    {
        std::cout << "Parking Lot is Empty" << std::endl;
    }

    return 0;
}