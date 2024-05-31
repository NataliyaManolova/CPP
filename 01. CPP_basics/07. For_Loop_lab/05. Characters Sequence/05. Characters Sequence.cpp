#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    getline(cin,text);

    for(int position = 0; position <= text.length( )- 1; position++)
    {
        cout << text[position] << endl;
    }
    return 0;
}

