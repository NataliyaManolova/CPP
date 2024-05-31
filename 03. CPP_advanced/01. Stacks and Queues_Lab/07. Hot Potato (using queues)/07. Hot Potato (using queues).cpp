#include <iostream>
#include <queue>
#include <sstream>

//програмата сумулира играта на "горещ картоф". Определен брой деца се нареждат в кръг и след n брой подавания, един от играчите отпада, Това се повтаря, докато накрая не остане един победител.

int main()
{
    std::string names;
    std::getline(std::cin, names);

    std::istringstream stream(names);

    std::queue <std::string> kidsInCircle;
    std::string kidName;

    while (stream >> kidName)
    {
        kidsInCircle.push(kidName);
    }

    int throws;
    std::cin >> throws;

    int throwsLeft = throws;

    while (true)
    {
        if (kidsInCircle.size() == 1)
            break;

        std::string kidName = kidsInCircle.front();
        kidsInCircle.pop();
        throwsLeft--;

        if (throwsLeft == 0)
        {
            std::cout << "Removed " << kidName << std::endl;
            throwsLeft = throws;
        }
        else
        {
            kidsInCircle.push(kidName);
        }
    }

    std::cout << "Last is " << kidsInCircle.front() << std::endl;
}