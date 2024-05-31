#include <iostream>
using namespace std;

int main()
{
    string projectionType;
    int rows, columns;
    cin >> projectionType >> rows >> columns;

   double ticketPrice = 0.0;

    if (projectionType == "Premiere")
    {
        ticketPrice = 12.00;
    }
    else if (projectionType == "Normal")
    {
        ticketPrice = 7.50;
    }
    else if (projectionType == "Discount")
    {
        ticketPrice = 5.00;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << ticketPrice * rows * columns << " leva" << endl;

    return 0;
}

