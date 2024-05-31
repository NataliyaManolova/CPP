#include <iostream>
using namespace std;

int main()
{
    int moneyForTrainingForYear;

    cin >> moneyForTrainingForYear;
    
    double snickersPrice = moneyForTrainingForYear - (moneyForTrainingForYear * 40 / 100.0);
    double dressingPrice = snickersPrice - (snickersPrice * 20 / 100.0);
    double ballPrice = dressingPrice * 0.25;
    double accessoriesPrice = ballPrice * 0.20;

    double allExpenses = moneyForTrainingForYear + snickersPrice + dressingPrice + ballPrice + accessoriesPrice;

    cout << allExpenses << endl;
    
}

