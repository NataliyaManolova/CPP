#include <iostream>
#include <algorithm>
#include <vector>

//Даден е определен брой имена. На конзолата трябва да се напечетат имената без да се взимат предвид техните повторения. Само че имената трябва да се напечатат в реда на влизане, а не по азбучен ред

int main()
{
    int namesNum;
    std::cin >> namesNum;

    std::vector <std::string> allNames;

    while (namesNum--)
    {
        std::string name;
        std::cin >> name;

        auto it = find(allNames.begin(), allNames.end(), name); //auto it е същото като std::vector <std::string>::iterator it

        if (it == allNames.end())
            allNames.push_back(name); 
    }

    for (std::string name : allNames)
    {
        std::cout << name << std::endl;
    }

    return 0;
}