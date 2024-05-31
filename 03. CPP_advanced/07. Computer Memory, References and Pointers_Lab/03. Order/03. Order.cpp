#include <iostream>
#include <map>
#include <string.h> // или <cstring> за strcpy

int main()
{
    char allStrings[5000] = {};
    char* curString = allStrings;

    std::map<int, const char*> info;

    std::string name;

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
        curString += name.length() + 1;
    }

    for (auto str : info)
        std::cout << str.second << " " << str.first << std::endl;
}