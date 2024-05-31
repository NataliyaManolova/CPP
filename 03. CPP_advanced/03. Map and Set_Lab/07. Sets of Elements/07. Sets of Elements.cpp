#include <iostream>
#include <set>

//на първият ред на конзолата се дават две числа. Първото е за броят числа, които да се сложат в вървият set, а второто броят числа за вторият set. След това трябва да се изведат на конзолата само числата, които се повтарят и в двата set-а.

void addNumbers(int size, std::set <int> &sets)
{
    while (size--)
    {
        int number;
        std::cin >> number;

        sets.insert(number);
    }
}

int main()
{
    int fSetSize, sSetSize;
    std::cin >> fSetSize >> sSetSize;

    std::set <int> firstSet;
    std::set <int> secondSet;

    addNumbers(fSetSize, firstSet);
    addNumbers(sSetSize, secondSet);
    
    for (int number : firstSet)
    {
        if (secondSet.find(number) != secondSet.end())
        {
            std::cout << number << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}