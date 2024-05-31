#include <iostream>
using namespace std;

int main()
{
    string day;
    cin >> day;

    if (day == "Monday" || day == "Tuesday" || day == "Friday")
    {
        cout << 12;
    }
    else if (day == "Wednesday" || day == "Thursday")
    {
        cout << 14;
    }
    else if (day == "Saturday" || day == "Sunday")
    {
        cout << 16;
    }
}

