#include <iostream>
using namespace std;

int main()
{
    int firstNumber = 0;
    int secondNumber = 0;

    cin >> firstNumber >> secondNumber;

    if (firstNumber > secondNumber)
    {
        cout << secondNumber << " " << firstNumber;
    }
    else
    {
        cout << firstNumber << " " << secondNumber;
    }

    return 0;
}
