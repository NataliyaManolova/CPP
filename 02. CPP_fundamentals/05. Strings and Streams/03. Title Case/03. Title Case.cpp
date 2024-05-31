#include <iostream>
# include <sstream>

//всяка дума в изречението да започва с главна буква

int main()
{
    std::string input;
    getline(std::cin, input);

    std::ostringstream output;
    int index = 0;

    int flag = 1;

    while (index < input.length())
    {    
        char c = input[index];
        index++;

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            if (flag)
            {
                if (c >= 'a' && c <= 'z')
                {
                    c = c - ('a' - 'A');
                    
                }
                    flag = 0;
            }
        }
        else
        {
                flag = 1;
        }
        output << c;

    }

    std::cout << output.str() << std::endl;
    
}

