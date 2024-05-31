#include <iostream>
#include <vector>
#include <climits>

//в първият варият прочитам времето на пристигане на автобуса и времето на заминаване на влака като числова променлива, а в този варият ги прочитам като стрингова променлива

unsigned stringToTime(const std::string& busTime)
{
        unsigned h = (busTime[0] - '0') * 10 + (busTime[1] - '0');
        unsigned m = (busTime[2] - '0') * 10 + (busTime[3] - '0');
       
        return h * 60 + m;
}

unsigned calcWaitTime(unsigned busMinutes, unsigned trainMinutes) //busArrival and trainDeparture
{
    unsigned waitTime = 0;

    if (busMinutes > trainMinutes)
    {
        waitTime = ((24 * 60 - busMinutes) + trainMinutes);
    }
    else
    {
        waitTime = trainMinutes - busMinutes;
    }

    return waitTime;
}

int main()
{
    size_t numberOfBusses;
    std::cin >> numberOfBusses;

    std::vector <unsigned> bussesTime(numberOfBusses);

    for (size_t cur = 0; cur < numberOfBusses; cur++)
    {
        std::string busTime;
        std::cin >> busTime;

        bussesTime[cur] = stringToTime(busTime);
    }

    std::string trainTime;
    std::cin >> trainTime;

    unsigned trainTimeInMin = stringToTime(trainTime);

    unsigned minWaitTime = UINT_MAX;
    size_t busIndex = 0;

    for (size_t cur = 0; cur < numberOfBusses; cur++)
    {
        unsigned waitTime = calcWaitTime(bussesTime[cur], trainTimeInMin);

        if (waitTime < minWaitTime)
        {
            minWaitTime = waitTime;
            busIndex = cur + 1;
        }
    }

    std::cout << busIndex;

    return 0;
}
