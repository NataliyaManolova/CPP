#include <iostream>
#include <sstream>
#include <string>

//събирам всички числа и ги принтирам и отделно принтирам текста

int main()
{
    std::string sentence;
    getline(std::cin, sentence);

    std::istringstream stream(sentence);
    std::string str;

    std::ostringstream outputLetters;
    int sum = 0;

    while (stream >> str)
    {
        char c = str[0];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            outputLetters << str << " ";
        }
        else
        {
            int number = stoi(str);
            sum += number;
        }
    }

    std::cout << sum << std::endl;
    std::cout << outputLetters.str() << std::endl;
}

