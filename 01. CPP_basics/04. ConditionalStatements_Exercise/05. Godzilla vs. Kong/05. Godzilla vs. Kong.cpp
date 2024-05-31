#include <iostream>
using namespace std;

int main()
{
    double movieBudget;
    int statists;
    double dressingPriceForStatists;

    cin >> movieBudget >> statists >> dressingPriceForStatists;

    double decor = movieBudget * 0.1;
    double allStatistsPrice = statists * dressingPriceForStatists;

    if (statists > 150)
    {
        allStatistsPrice = allStatistsPrice - (allStatistsPrice * 0.1);
        // allStatistsPrice -= allStatistsPrice * 0.1;
    }

    double allMoneyForPaying = decor + allStatistsPrice;

    double difference = movieBudget - allMoneyForPaying;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (difference < 0)
    {
        cout << "Not enough money!\n" << "Wingard needs " << abs(difference) << " leva more." << endl; // \n ==> endl;
    }
    else
    {
        cout << "Action!\n" << "Wingard starts filming with " << difference << " leva left." << endl;
    }
}


