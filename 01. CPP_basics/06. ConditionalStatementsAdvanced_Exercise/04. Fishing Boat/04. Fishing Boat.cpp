#include <iostream>
#include <string>
using namespace std;

int main()
{
    int budget, fishermen;
    string season;

    double price = 0;

    cin >> budget >> season >> fishermen;


    if (season == "Spring")
    {
        price = 3000;
    }
    else if (season == "Summer" || season == "Autumn")
    {
        price = 4200;
    }
    else if (season == "Winter")
    {
        price = 2600;
    }

    if (fishermen <= 6)
    {
        price -= price * 0.1;
    }
    else if (fishermen >= 7 && fishermen <= 11)
    {
        price -= price * 0.15;
    }
    else if (fishermen >= 12)
    {
        price -= price * 0.25;
    }

    if (fishermen % 2 == 0 && season != "Autumn")
    {
        price -= 0.05 * price;
    }

    double difference = budget - price;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (difference >= 0)
    {
        cout << "Yes! You have " << difference << " leva left." << endl;
    }
    else
    {
        cout << "Not enough money! You need " << abs(difference) << " leva." << endl;
    }
}


