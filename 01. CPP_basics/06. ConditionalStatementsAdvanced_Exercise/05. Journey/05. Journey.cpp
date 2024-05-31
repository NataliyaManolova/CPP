#include <iostream>
#include <string>

using namespace std;

int main()
{
    double budget;
    string season, destination, hotelOrCamp;
    double neededMoney;

    cin >> budget >> season;

    if (budget <= 100)
    {
        destination = "Bulgaria";

        if (season == "summer")
        {
            neededMoney = budget * 0.3;
            hotelOrCamp = "Camp";
        }
        else if (season == "winter")
        {
            neededMoney = budget * 0.7;
            hotelOrCamp = "Hotel";
        }
    }
    else if (budget <= 1000)
    {
        destination = "Balkans";

        if (season == "summer")
        {
            neededMoney = budget * 0.4;
            hotelOrCamp = "Camp";
        }
        else if (season == "winter")
        {
            neededMoney = budget * 0.8;
            hotelOrCamp = "Hotel";
        }
    }
    else
    {
        destination = "Europe";

        neededMoney = budget * 0.9;
        hotelOrCamp = "Hotel";
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Somewhere in " << destination << endl;
    cout << hotelOrCamp << " - " << neededMoney << endl;
}

