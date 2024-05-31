#include <iostream>
#include <sstream>
#include <string>

bool isLexicographycallySmaller(const std::string &a, const std::string &b)
{
    return a < b;
}

bool isLengthSmaller(const std::string &a, const std::string &b)
{
    return a.length() < b.length();
}

bool isLengthBigger(const std::string &a, const std::string &b)
{
    return a.length() > b.length();
}

int main()
{
    std::string line;
    std::getline(std::cin, line);

    int command;
    std::cin >> command;

    bool(*resu)(const std::string&, const std::string&) = NULL;
    if (command == 1) resu = isLexicographycallySmaller;
    else if (command == 2) resu = isLengthSmaller;
    else if (command == 3) resu = isLengthBigger;

    std::stringstream stream(line);
    std::string curWord, result;
    bool isFirstIteration = true;

    while (stream >> curWord)
    {
        if (isFirstIteration || resu(curWord, result))
            result = curWord;

        if (isFirstIteration)
            isFirstIteration = false;
    }

    std::cout << result << std::endl;
}