#include <iostream>
#include <stack>

//Кодът проверява дали скобите са сложени правилно, като на всяка отваряща скоба трябва да съответства затваряща от същият вид. 

bool bracket(const std::string & brackets)
{
    std::stack<char> openBrackets;

    char expectedBracket = 0;

    for (char cur : brackets)
    {
        switch (cur)
        {
        case '(':
        case '[':
        case '{':

            openBrackets.push(cur);
            continue; //ако е break ще излезе от switch и ще направи долната if проверка, което ще доведе до грешка на кода

        case ')': expectedBracket = '('; break;
        case ']': expectedBracket = '['; break;
        case '}': expectedBracket = '{'; break;
        
        default:
            std::cout << "Error" << std::endl;
            exit(0);
            break;
        }

        if (openBrackets.empty() || openBrackets.top() != expectedBracket)
            return false;
        openBrackets.pop();
    }

    return true;
}

int main()
{
    std::string brackets;
    std::cin >> brackets;

    std::cout << (bracket(brackets) ? "YES" : "NO") << std::endl;

    return 0;
}