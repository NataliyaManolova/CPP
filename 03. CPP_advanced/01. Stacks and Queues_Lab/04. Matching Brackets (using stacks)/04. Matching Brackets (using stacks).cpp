#include <iostream>
#include <stack>
#include <algorithm>
#include <sstream>

//Ако например имаме израза "1 + (2 - (2 + 3) * 4 / (3 + 1)) * 5", на конзолата трябва да се отчечата "(2 + 3)" , "(3 + 1)" , "(2 - (2 + 3) * 4 / (3 + 1))" в този ред едно под друго.

int main()
{
    std::string line;
    std::getline(std::cin, line);

    std::stack <size_t> openBracketIndex;

    for (size_t i = 0; i < line.length(); i++)
    {
        switch (line[i])
        {
        case '(':
            openBracketIndex.push(i);
            break;

        case ')':
            size_t openBracket = openBracketIndex.top();
            openBracketIndex.pop();
            std::string innerexpression = line.substr(openBracket, i - openBracket + 1); 
            //например при input: "1 + (2 - (2 + 3) * 4 / (3 + 1)) * 5" първо се взима "(2 + 3)". Тогава i = 15, което ще е ')', а oneBracketIndex = 9; 15 - 9 = 6; Но дължината на стринга "(2 + 3)" е 7, затова за да не се изпусне скобата, пишем 6+1 = 7.
            std::cout << innerexpression << std::endl;
            break;
        }
    }

    return 0;
}