#include <iostream>
using namespace std;

int main()
{
    double depositSum;
    int periodInMonths;
    double percentage;
    
    cin >> depositSum >> periodInMonths >> percentage;

    double allDepositMoney = depositSum * (percentage / 100.0);
    double moneyForMonth = allDepositMoney / 12;
    double result = depositSum + (periodInMonths * moneyForMonth);
    
    cout << result << endl;

}

