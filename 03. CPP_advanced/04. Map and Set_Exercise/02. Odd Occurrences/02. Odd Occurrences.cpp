#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <ctype.h>
#include <algorithm>

//трябва да се изведат само думите, които се повтарят нечетен брой пъти и да са подредят по ред на появяване, а не по азбучен ред.

int main()
{
    std::string line;
    std::getline(std::cin, line);

    //тази функция прави всички думи да са с малки букви
    std::transform(line.cbegin(), line.cend(), line.begin(), ::tolower); //c - const; тази функция взема начало и край на range-а който ще бъде трянсформиран, след това взема итератор към мястото където трябва да започне да записва трансформираното съдържание, и накрая е написана функцията, която той вика за всяко едно от елементчетата, които трябва да бъде тянсформирано

    std::istringstream stream(line);

    std::string word;

    std::map<std::string, int> allWords;
    std::vector <std::string> toKeepOrder;

    while (stream >> word)
    {
        auto it = allWords.find(word);

        if (it == allWords.end())
            toKeepOrder.push_back(word);

        allWords[word]++;
    }
          
    bool isFirst = true;
    auto it = toKeepOrder.begin();

    for (; it != toKeepOrder.end(); it++)
    {
        if (allWords[*it] % 2 != 0)
        {
            if (isFirst)
                isFirst = false;
            else
                std::cout << ", ";

            std::cout << *it;
        }   
    }
    std::cout << std::endl;

    /*for (std::string word : toKeepOrder)
    {
        if (allWords[word] % 2 != 0)
        {
            if (isFirst)
                isFirst = false;
            else
                std::cout << ", ";

            std::cout << word;
        }
    }
    std::cout << std::endl;*/ 

    return 0;
}