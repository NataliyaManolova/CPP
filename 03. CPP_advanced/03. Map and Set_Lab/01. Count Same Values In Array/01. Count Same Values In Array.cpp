#include <iostream>
#include <map>
#include <vector>
#include <sstream>

//даден е един ред с числа, трябва да се преброи колко пъти всяко число се среща, след това да се принтират числата по ред на влизане, а не по сортиран ред.

int main()
{
    std::string numbers;
    std::getline(std::cin, numbers);

    std::istringstream stream(numbers);

    std::vector <double> orderOfAppearing;
    std::map<double, int> allNum;

    double number;

    while (stream >> number)
    {
        auto it = allNum.find(number);

        if (it == allNum.end()) //ако числото го няма
        {
            orderOfAppearing.push_back(number); //го пъшваме във вектора
            allNum[number] = 1; //и след това го пъшваме и в map и създаваме нов key = number с value = 1
        }
        else
        {
            it->second++; //иначе увеличаваме value с 1; може и така allNum[number]++;
        }
    }

    auto it = orderOfAppearing.begin();

    for (; it != orderOfAppearing.end(); it++)
    {
        std::cout << *it << " - " << allNum[*it] << " times" << std::endl;
    }

    return 0;
}
