#include <iostream>
#include <sstream>
#include <list>

//На една гара, влаковете пристигат по два коловоза - коловоз А и коловоз В, и се обединяват в един коловоз. Всеки влак има определен брой вагони.
//Като вагоните се броят във възходящ ред от най-предния вагон до най-задния.
//Целта е да се отпечата реда в който се сливат вагоните на двата влака. от най-малкото до най-голямото число (ААВВВАВ) и да се отпечатат номерата в нисходящ ред.

//Примерен вход:
// А: 11 4 2 1
// В: 5 3


void ascendingNumbers(std::list<int>& trains) //тук използваме push_front за да обърнем реда на числата във възходящ ред: А: 12411, В: 35;
{
    std::string readTrainsNumber;
    getline(std::cin, readTrainsNumber);

    std::istringstream inputTrain(readTrainsNumber);
    int numberOfTrain;

    while (inputTrain >> numberOfTrain)
    {
        trains.push_front(numberOfTrain);
    }
}

void print(const std::list<int>& trains) //този код използваме за да се принтира крайната подредба на числата, когато се слеят коловозите;
{
    for (int numberTrain : trains)
    {
        std::cout << numberTrain << ' ';
    }
    std::cout << std::endl;
}

int main()
{
    std::list<int> trainA;
    std::list<int> trainB;
    std::list<int> mergeTrainsN;

    ascendingNumbers(trainA);
    ascendingNumbers(trainB);

    std::string mergedAB;

    std::list<int>::iterator itA = trainA.begin();
    std::list<int>::iterator itB = trainB.begin();

    while (itA != trainA.end() || itB != trainB.end())
    {
        if (itA != trainA.end() && itB != trainB.end())
        {
            if (*itA < *itB) //когато е *взимаме стойността, когато е без * взимаме самото местоположение на елемента
            {
                mergedAB += 'A';
                mergeTrainsN.push_front(*itA);
                itA++;
            }
            else
            {
                mergedAB += 'B';
                mergeTrainsN.push_front(*itB);
                itB++;
            }
        }
        else if (itA != trainA.end())
        {
            mergedAB += 'A';
            mergeTrainsN.push_front(*itA);
            itA++;
        }
        else if (itB != trainB.end())
        {
            mergedAB += 'B';
            mergeTrainsN.push_front(*itB);
            itB++;
        }
    }

    std::cout << mergedAB << std::endl; //принтира се реда на АВ вагоните във възходящ ред: ААВАВА
    print(mergeTrainsN); //принтира се реда на вагоните в нисходящ ред 11 5 4 3 2 1;

    return 0;
}