#include <iostream>
using namespace std;

int main()
{
    int age;
    double priceOfWashingMachine;
    int priceOfToy;

    double money = 0.0;
    double moneyForBirthday = 10.0;

    cin >> age >> priceOfWashingMachine >> priceOfToy;

    for (int i = 1; i <= age; i++)
    {
        if (i % 2 == 0)
        {
            money += moneyForBirthday;
            moneyForBirthday += 10.0;
            money -= 1.0;
        }
        else
        {
            money += (double)priceOfToy;
        }
    }

    double cost = abs(priceOfWashingMachine - money);

    cout.setf(ios::fixed);
    cout.precision(2);

    if (priceOfWashingMachine <= money)
    {
        cout << "Yes! " << cost << endl;
    }
    else
    {
        cout << "No! " << cost << endl;
    }

    return 0;
}

