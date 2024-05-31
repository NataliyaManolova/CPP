#include <iostream>
using namespace std;

int main()
{
    double tripPrice;
    int puzzles, dolls, bears, minions, trucks;
    cin >> tripPrice >> puzzles >> dolls >> bears >> minions >> trucks;

    int allToys = puzzles + dolls + bears + minions + trucks;

    double puzzlesPrice = puzzles * 2.60;
    double dollsPrice = dolls * 3;
    double bearsPrice = bears * 4.10;
    double minionsPrice = minions * 8.20;
    double trucksPrice = trucks * 2;

    double allSells = puzzlesPrice + dollsPrice + bearsPrice + minionsPrice + trucksPrice;

    if (allToys >= 50) 
    {
        //double discountMoney = allSells * 0.25;
        //allSells -= discountMoney;
        allSells = allSells - (allSells * 0.25); //allSells -= allSells * 0.25;
    }

    allSells = allSells - (allSells * 0.1);

    double difference = tripPrice - allSells;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (difference > 0)
    {
        cout << "Not enough money! " << difference << " lv needed." << endl;
    }
    else
    {
        cout << "Yes! " << abs(difference) << " lv left." << endl;
    }
}

