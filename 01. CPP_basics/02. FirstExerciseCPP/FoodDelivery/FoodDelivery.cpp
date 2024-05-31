#include <iostream>
using namespace std;

int main()
{
    int chickenMenus, fishMenus, vegiMenus;

    cin >> chickenMenus >> fishMenus >> vegiMenus;

    double chickenMenusPrice = chickenMenus * 10.35;
    double fishMenusPrice = fishMenus * 12.40;
    double vegiMenusPrice = vegiMenus * 8.15;

    double menusPrice = chickenMenusPrice + fishMenusPrice + vegiMenusPrice;

    double dessert = menusPrice * 0.2;
    double bill = menusPrice + dessert + 2.50;
    cout << bill << endl;


}

