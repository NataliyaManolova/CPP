#include <iostream>
using namespace std;

int main()
{
    int workingHours;
    string day;

    cin >> workingHours >> day;

    if (workingHours >= 10 && workingHours <= 18)
    {
        if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday" || day == "Saturday")
        {
            cout << "open";
        }
        else if (day == "Sunday")
        {
            cout << "closed";
        }
        
    }
    else
    {
        cout << "closed";
    }
}
