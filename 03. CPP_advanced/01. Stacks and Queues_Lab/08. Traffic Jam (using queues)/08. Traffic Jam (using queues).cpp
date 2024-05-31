#include <iostream>
#include <queue>
#include <string>
#include <sstream>

//програма симулира опашката, която се образува по време на задръстване. В началото е даден начален брой коли, които могат да преминат. Директно напечатвам на конзолата, че тези коли са преминали. След това обаче, колите които идват, трябва да чакат да стане "зелено". Тези коли ги вкарвам в queue до появата на комадата "green". Отново конзолата показва в output кои коли са преминали. Ако командата "green" не се появи преди "end" колите няма да преминат. Освен първите коли, които в началото са преминали, както е условието. Накрая на конзолата се изписва брой коли, които са преминали.

void printCars(std::queue <std::string>& allCars)
{
    while (allCars.size())
    {
        std::cout << allCars.front() << " passed!" << std::endl;
        allCars.pop();
    }

}

int main() {

    //този код имитира светофара. В момента в който светофара стане "green" всички коли, които са спрели пред него минават.
    int carsToPass; //това са броят коли, които могат да минат преди първата команда "green".
    std::cin >> carsToPass;
    std::cin.ignore();

    std::string nameOrCommand;

    std::queue <std::string> allCars;


    for (int i = 0; i < carsToPass; i++) //по условие трябва първо да сложа имената на колите, които могат да минат преди първата команда "green", в queue и след това да ги отпечатам на конзолата.
    {
        std::getline(std::cin, nameOrCommand);
        allCars.push(nameOrCommand);
    }

    printCars(allCars);

    int count = carsToPass;

    while (true) //останалите коли трябва да получат командата green
    {
        std::getline(std::cin, nameOrCommand);

        if (nameOrCommand == "green")
        {
            count += allCars.size();
            printCars(allCars);
        }
        else
        {
            allCars.push(nameOrCommand);
        }

        if (nameOrCommand == "end")
            break;

    }

    std::cout << count << " cars passed the crossroads." << std::endl;

    return 0;
}
