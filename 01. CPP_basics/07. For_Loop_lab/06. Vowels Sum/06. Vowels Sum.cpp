#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    getline(cin,text);

    int sum = 0;

    for (int position = 0; position <= text.length()-1; position++) // ili  position < text.length()
    {
        char currentSymbol = text[position];

        if (currentSymbol == 'a')
        {
            sum++;
        }
        else if (currentSymbol == 'e')
        {
            sum += 2;
        }
        else if (currentSymbol == 'i')
        {
            sum += 3;
        }
        else if (currentSymbol == 'o')
        {
            sum += 4;
        }
        else if (currentSymbol == 'u')
        {
            sum += 5;
        }
        
        
    }
    cout << sum << endl;

    return 0;
}

