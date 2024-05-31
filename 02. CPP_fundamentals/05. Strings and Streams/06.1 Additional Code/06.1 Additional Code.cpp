#include <iostream>
#include <sstream>

//Вадя всички числа без 'шума'/'noise'

int main()
{
    std::string sentence;
    getline(std::cin, sentence);

    std::istringstream stream(sentence);
    std::string str;
    int i = 0;
    int number = 0;

    std::ostringstream output;

    while (stream >> str)
    {
        number = 0;

        for (int index = 0; index < str.length(); index++)
        {
            char c = str[index];

            if (c >= '0' && c <= '9')
            {
                int value = c - '0';

                number *= 10;
                number += value;
            }
        }

        output << number << " ";
    }

    std::cout << output.str() << std::endl;
}

