#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <ctype.h> //tolower
#include <algorithm> //transform

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
        //result === pair <iterator, bool>
        //first на result връща "word, 1" от този пример, second на result връща  "false" или "true" в зависимост от това дали думата, която инсъртваме я има вече в map или не.
        //(1 може да се е увеличило защото броим броя на появяванията на думата)
        auto result = allWords.insert({ word, 1 });

        if (result.second) //тоест ако е "true" се влиза в if функцията. Защото result.second връща true или false
            toKeepOrder.push_back(word);
        else
        {
            std::map<std::string, int>::iterator& it = result.first; //result.first сочи както към word, така и към броя появявания, например 1. result.first е итератор, който също представлява двойка. Той се разделя/сочи на допълнителни first и second

            //Ако напишем it->first това ще извика word.
            it->second++; //увеличаваме броя появявания с 1

            //а този запис може да замести горните два реда: result.first->second++;
                                                     // или  (*result.first).second++;
        }
    }

    bool isFirst = true;

    for (std::string word : toKeepOrder)
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
    std::cout << std::endl;

    return 0;
}