#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

// чете се един ред на конзолата. След това, всички дими се разместват отзад напред. Както и всички букви във всяка отделна дума.

int main()
{
    std::string sentence;
    std::getline(std::cin, sentence);

    std::istringstream input(sentence);
    std::string cur;

    std::vector<std::string> words;

    while (input >> cur)
    {
        reverse(cur.begin(), cur.end());
        words.push_back(cur);
    }

    std::stack<std::string> stack;

    for (std::string word : words)
    {
        stack.push(word);
    }

    while (!stack.empty())
    {
        std::cout << stack.top() << " ";
        stack.pop();
    }

    std::cout << std::endl;


    /*
    std::string str;

    std::getline(std::cin, str);
    
    std::stack<char> reversed;

    for(int i = 0; i < str.length(); i++)
    reversed.push(str[x]);

    while(!reversed.empty())
    {
      std::cout << reversed.top();
      reversed.pop();
    }

    std::cout << std::endl;

    return 0;
    */
}