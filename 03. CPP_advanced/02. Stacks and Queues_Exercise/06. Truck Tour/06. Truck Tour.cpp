#include <iostream>
#include <queue>

//Да предположим, че има кръг. В този кръг има N на брой помпи за бензин. Имаме дадено като информация количеството бензин, което конкретната помпа ще даде, и разстоянието от тази помпа до следващата. Първоначално камионът има резервоар с безкраен капацитет, който обаче не съдържа бензин. Камионът ще гори един литър бензин за един километър. Трябва да се изчисли от коя помпа трябва камионът да тръгне за да може да мине през всички помпи, без да му свърши бензина преди това.

bool route(std::queue <int> allPetrol, std::queue <int> allDistances)
{
    int sumPetrol = 0;
    int sumDistance = 0;

    while (allPetrol.size())
    {
        int petrol = allPetrol.front();
        int distance = allDistances.front();
        sumPetrol += petrol;

        allPetrol.pop();
        allDistances.pop();

        if (sumPetrol < distance)
            return false;

        sumPetrol -= distance;
    }
    
    return true;
}

int main()
{
    int pumps;
    std::cin >> pumps;

    std::queue <int> allPetrol;
    std::queue <int> allDistances;

    for (int i = 0; i < pumps; i++)
    {
        int petrol, distance;
        std::cin >> petrol >> distance;
        allPetrol.push(petrol);
        allDistances.push(distance);
    }
    
    for (int i = 0; i < pumps; i++)
    {
        bool result = route(allPetrol, allDistances);

        if (result)
        {
            std::cout << i << std::endl;
            return 0;
        }
        else
        {
            int petrol = allPetrol.front();
            int distance = allDistances.front();
            allPetrol.pop();
            allDistances.pop();
            allPetrol.push(petrol);
            allDistances.push(distance);
        }
    }

    if (route(allPetrol, allDistances) == false)
    {
        std::cout << "There is no right route" << std::endl;
    }

    return 0;
}
