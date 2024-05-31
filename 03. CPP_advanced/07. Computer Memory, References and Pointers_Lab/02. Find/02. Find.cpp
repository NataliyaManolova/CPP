#include <iostream>
#include <map>
#include <string.h> //strcpy

int main()
{
    char allStrings[5000];
    char* curString = allStrings;

    std::string name;
    std::map<int, const char*> info;

    while (std::cin >> name)
    {
        if (name == "end")
            break;

        //strcpy(curString, name.c_str()); //това се приема от judge, но не и от vs
        strcpy_s(curString, sizeof(allStrings) - (curString - allStrings), name.c_str()); // това се приема от vs, но не и от judge
        //sizeof(allStrings) - (curString - allStrings) : това е оставащия размер на масива.
        //curString - allStrings е големината на заетото пространство в allStrings

        int id;
        std::cin >> id;

        info[id] = curString;

        curString += name.length() + 1; //1 е за \0
    }

    int searchId;
    std::cin >> searchId;

    auto it = info.find(searchId);

    if (it == info.end())
        std::cout << "[not found]" << std::endl;
    else
        std::cout << it->second << " " << it->first << std::endl;

    return 0;
}