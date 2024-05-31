#include <iostream>
#include <stack>
#include <algorithm>
#include <sstream>

//калкулатор, който смята само с "+" и "-".

void calculations(std::stack <int>& numbers, std::string command)
{
    int secondNumber = numbers.top();
    numbers.pop();
    int firstNumber = numbers.top();
    numbers.pop();

    if (command == "+")
    {
        int newNumber = firstNumber + secondNumber;
        numbers.push(newNumber);
    }
    else if (command == "-")
    {
        int newNumber = firstNumber - secondNumber; //при изваждане винаги трябва от първото число в стака да се извади второто. Ако е наобратно се получават грешки
        numbers.push(newNumber);
    }

}

int main()
{
    std::stack <int> numbers;
    std::string line;
    std::getline(std::cin, line);

    std::istringstream input(line);

    std::string cur;
    std::string command;

    while (input >> cur)
    {
        if (numbers.size() == 2)
        {
            calculations(numbers, command);
        }

        if (isdigit(cur[0]))
        {
            numbers.push(stoi(cur));
        }
        else
        {
            command = cur;
        }
    }

    if (numbers.size() == 2)
    {
        calculations(numbers, command);
    }

    int sum = numbers.top();

    std::cout << sum << std::endl;
}