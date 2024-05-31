#include <iostream>
#include <string>

//заменям една дума в текста с друга, като първо намирам индекса на думата. Като съм заменила дадената дума с дадения индекс, 
//започвам да търся същата заменяема дума по - нататък в изречението, като записвам foundIndex = sentence.find(findWord, foundIndex);
//тоест find думата след foundIndex, който вече сме намерили

int main()
{
    std::string sentence;
    getline(std::cin, sentence);

    std::string findWord;
    std::string replaceWord;

    getline(std::cin, findWord);
    getline(std::cin, replaceWord);

    int foundIndex = sentence.find(findWord);

    while (foundIndex != std::string::npos)
    {

        sentence.replace(foundIndex, findWord.length(), replaceWord);

        foundIndex += replaceWord.length();

        foundIndex = sentence.find(findWord, foundIndex);

    }
    std::cout << sentence << std::endl;
}

