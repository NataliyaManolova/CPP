#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int number = 1; number <= n; number += 3)
    {
        cout << number << endl;
    }
    return 0;
}

