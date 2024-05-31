#include <iostream>
#include <queue>
#include <string>
#include <sstream>

//Програмата чете до стигането на END, след това проверява колко коли са преминали и дали е имало "катастрофа". За целта в началото е дадено времетраенето на зеления светофар и има допълнителен прозорец от време, който може да се използва, ако все още има "секунди" останали от зеления светофар, които сами по себе си не са достатъчни за да може колата да премине. За една "секунда" само един символ/индекс може да премине. Тоест "mercedes" например ще му трябват 8 "секунди". Ако времето на зеления светофар изтече, колите след това просто няма да преминат, но ако има например 1 "секунда" време и някоя кола се опита да мине използвайки допълнителния прозорец от време и дори тогава времето се окаже недостатъчно, тогава има "катастрофа". Първият символ, който не е могъл да премине се отпечатва.

int main() {

    int greenLight, freeWindow;
    std::cin >> greenLight >> freeWindow;
    std::cin.ignore();

    std::string input;
    std::getline(std::cin, input);

    std::queue <std::string> allInput;

    while (input != "END")
    {
        allInput.push(input);

        std::getline(std::cin, input);
    }

    std::queue <std::string> allCars;
    std::queue <std::string> carsThatPassed;

    bool crash = false;
    char crashAt;

    while (!allInput.empty())
    {
        if (crash)
            break;

        std::string commandOrCar = allInput.front();

        if (commandOrCar == "green")
        {
            int greenLightSec = greenLight;
            while (!allCars.empty())
            {
                std::string theCar = allCars.front();
                int carSize = theCar.size();

                if (carSize <= greenLightSec)
                {
                    carsThatPassed.push(allCars.front());
                    greenLightSec -= carSize;
                    allCars.pop();
                }
                else if (greenLightSec >= 1)//и carSize > greenLight
                {
                    int diff = carSize - greenLightSec - freeWindow;

                    if (diff < 0)
                    {
                        carsThatPassed.push(allCars.front());
                        greenLightSec -= carSize;
                        allCars.pop();
                    }
                    else
                    {
                        int sizeThatPassed = carSize - diff; //diff е тази част от размера на "колата", който е бил в повече и не е преминал. (брои се от 1, не 0) sizeThatPassed е рамера, който е преминал.
                        int index = sizeThatPassed; // индексът на първият символ от думата/"колата", който не е преминал
                        crashAt = theCar[index]; // или std::string crashAt = theCar.substr(index, 1); Брои се от 0 до стигането на индекса.

                        crash = true;

                        break;
                    }
                }
                else
                {
                    allCars.pop();
                }
            }
        }
        else
        {
            allCars.push(commandOrCar);
        }

        allInput.pop();
    }

    if (crash)
    {
        std::cout << "A crash happened!" << std::endl;
        std::cout << allCars.front() << " was hit at " << crashAt << "." << std::endl;
    }
    else
    {
        std::cout << "Everyone is safe." << std::endl;
        std::cout << carsThatPassed.size() << " total cars passed the crossroads." << std::endl;
    }

    return 0;
}
