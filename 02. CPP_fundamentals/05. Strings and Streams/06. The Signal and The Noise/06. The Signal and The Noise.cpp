#include <iostream>
#include <sstream>

//Вадя само най-голямото число от всички, като пренебрегвам 'шума'/'noise'

int main()
{
    std::string sentence;
    getline(std::cin, sentence);

    std::istringstream stream(sentence);
    std::string str;
    int currentNumber = 0;
    int biggestNumber = 0;

    while (stream >> str)
    {
        currentNumber = 0;

        for (int index = 0; index < str.length(); index++)
        {
            char c = str[index];

            if (c >= '0' && c <= '9')
            {
                int value = c - '0'; //примерно ако е '9' - '0', през ASCII таблицата това е 57 - 48 = 9; => получаваме числото 9;

                currentNumber *= 10;
                currentNumber += value;
            }
        }

        if (currentNumber > biggestNumber)
        {
            biggestNumber = currentNumber;
        }
    }

    std::cout << biggestNumber << std::endl;
}

