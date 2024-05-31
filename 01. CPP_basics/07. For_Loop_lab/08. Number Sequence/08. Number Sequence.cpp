#include <iostream>
#include <math.h> // moje bez tova
#include <string> // moje bez tova
#include <limits.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int minNumber = INT_MAX;
    int maxNumber = INT_MIN;

    for (int number = 0; number < n; number++)
    {
        int currentNumber;
        cin >> currentNumber;

        if (currentNumber > maxNumber)
        {
            maxNumber = currentNumber;
        }
        if (currentNumber < minNumber)
        {
            minNumber = currentNumber;
        }
       
    }
    cout << "Max number: " << maxNumber << endl;
    cout << "Min number: " << minNumber << endl;
    return 0;
}

