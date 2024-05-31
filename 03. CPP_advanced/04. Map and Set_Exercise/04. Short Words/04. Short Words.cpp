#include <iostream>
#include <set>
#include <sstream>

//трябва да се вземат само думите, които са с по-малко от 5 букви и да се подредят по азбучен ред. Без дубликати.

int main()
{
    std::string line;
    std::getline(std::cin, line);

    //тази функция прави всички думи да са с малки букви, ще трябва и #include <algorithm>
    //std::transform(line.cbegin(), line.cend(), line.begin(), ::tolower);

    std::istringstream stream(line);

    std::string word;

    std::set<std::string> allWords;

    while (stream >> word)
    {
        std::string newWord;

        for (char c : word)
        {
            char a = tolower(c);
            newWord += a;
        }

        if (newWord.size() < 5)
        {
            allWords.insert(newWord);
        }
    }

    bool isFirst = true;

    for (std::string word : allWords)
    {
        if (isFirst)
            isFirst = false;
        else
            std::cout << ", ";

        std::cout << word;
    }

    return 0;
}