#include <iostream>
#include <vector>
#include <climits>

//Трябва да се намери на кой автобус времето на пристигане е най-близо до заминаването на влака. Часовете са дадени като четирицифрени числа (в хиляди).
// На конзолата се чете брой автобуси, времето на пристигане на всички автобуси и времето на тръгване на влака.

int main()
{
    unsigned numberOfBusses;
    std::cin >> numberOfBusses;

    std::vector <unsigned> bussesTime(numberOfBusses);

    unsigned trainTime;

    for (unsigned cur = 0; cur < numberOfBusses; cur++)
    {
        std::cin >> bussesTime[cur];
    }

    std::cin >> trainTime;

    unsigned trainMinutes = ((trainTime / 100) * 60 + trainTime % 100);

    unsigned currentTime = 0;
    unsigned minWaitTime = UINT_MAX;
    unsigned busIndex = 0;

    for (unsigned cur = 0; cur < numberOfBusses; cur++)
    {
        unsigned busMinutes = ((bussesTime[cur] / 100) * 60 + bussesTime[cur] % 100);

        if(busMinutes > trainMinutes) //ако времето на пристигане на автобуса в минути е по-голямо от времето на тръгване на влака, това означава, че влакът тръгва на следващият ден
        {
            currentTime = ((24 * 60 - busMinutes) + trainMinutes); //взимаме всички минути в едно денонощие и вадим времето на пристигане на автобуса в минути за да получим колко минути остават да чакаме до края на този ден. Тъй като влакът присти на другият ден, добавяме времето на пристигане на влака в минути и получаваме общото време, което е трябвало да чакаме на гарата.
        }
        else
        {
            currentTime = trainMinutes - busMinutes;
        }
        
        if (currentTime < minWaitTime)
        {
            minWaitTime = currentTime;
            busIndex = cur + 1;
        }
    }

    std::cout << busIndex;

    return 0;
}