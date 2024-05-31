#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h> //strcpy

bool compareVector(const std::pair<int*, char*> a, const std::pair<int*, char*> b)
{
    return (*a.first) < (*b.first); //first дава int оказател, * върху int указател дава int-а към който сочи a.first
}

int main()
{
    char allStrings[5000] = {};
    int* curInt = (int*)allStrings;
    char* curString = (char*) (curInt + 1); //+1 за да може от където сочи curInt, 4 байта по-нататък да се разположи curString

    std::vector<std::pair<int*, char*>> data;

    std::string name;

    while (std::cin >> name)
    {
        if (name == "end")
            break;

        std::cin >> *curInt;
        strcpy_s(curString, sizeof(allStrings) - (curString - allStrings), name.c_str()); // това се приема от vs, но не и от judge
        //strcpy(curString, name.c_str()); //това се приема от judge, но не и от vs
        
        data.push_back(std::pair<int*, char*> (curInt, curString));
        
        //char* ни трябва за да можем да смятаме в най-малката единица с която разполагаме, това е char заради name, а int ни трябва за да може след това да го присвоим на самия указател
        curInt = (int*) ( ((char*)curInt) + sizeof(int) + name.length() + 1); //+1 заради \0 на стринга
        curString = (char*)(curInt + 1); //+1 за да може от където сочи curInt, 4 байта по-нататък да се разположи curString
    }

    sort(data.begin(), data.end(), compareVector);

    for (auto &cur : data)
        std::cout << cur.second << " " << *cur.first << std::endl;
}