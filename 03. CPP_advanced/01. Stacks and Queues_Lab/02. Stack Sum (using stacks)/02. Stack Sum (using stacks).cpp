#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <vector>

//на първият ред на конзолата се въвеждат само числа, които ние да добавим в stack, а на следващите редове се изписват командите. Например, ако имаме командата "add"  до add ще има изписани две числа, които трябва да бъдат добавени в stack. Ако имаме командата "remove" след remove ще има изписано едно число. Това е броят числа, които трябва да бъдат изтрити. Ако числото е по-голямо от броят числа в stack, изпускаме тази команда. Това продължава до стигането на командата "end". add и remove могат да бъдат изписани с малки и големи букви на случаен принцип.

int main()
{
    std::stack <int> numbers;

    std::string lineOfNum;
    std::getline(std::cin, lineOfNum);
    std::istringstream stream(lineOfNum);

    int curr;

    while (stream >> curr) //по условие на първият ред на конзолата се изписват само числа, а на следващите редове има команди
    {
        numbers.push(curr);
    }

    while (true)
    {
        std::string command;
        std::getline(std::cin, command);

        std::istringstream input(command);
        std::string cur;
        
        input >> cur;
        
        for (int i = 0; i < cur.length(); i++) //ако командата е с малки и големи букви едновременно
        {
            cur[i] = tolower(cur[i]);
        }

        if (cur == "end")
        {
            break;
        }       

       if (cur == "add")
        {
                int firstNum, secondNum;

                input >> firstNum >> secondNum;

                numbers.push(firstNum);
                numbers.push(secondNum);
        }
        else if (cur == "remove")
        {
           int amountToRemove;

            input >> amountToRemove;

            if (amountToRemove <= numbers.size())
            {
                for (int i = 0; i < amountToRemove; i++)
                {
                    numbers.pop();
                }
            }
        }
    }

    int sum = 0;

    while (!numbers.empty())
    {
        sum += numbers.top();
        numbers.pop();
    }

    std::cout << sum << std::endl;
}