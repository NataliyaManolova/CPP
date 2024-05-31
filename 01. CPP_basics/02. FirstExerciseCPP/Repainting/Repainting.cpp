#include <iostream>
using namespace std;

int main()
{
    int nylon, paint, thinner, workingHours;

    cin >> nylon >> paint >> thinner >> workingHours;

    double nylonPrice = (nylon + 2) * 1.50;
    double paintPrice = (paint + (paint * 0.1)) * 14.50;
    double thinnerPrice = thinner * 5.00;

    double materialsPrice = nylonPrice + paintPrice + thinnerPrice + 0.40;

    double workersPayPerHour = materialsPrice * 0.3;
    double workersWholePayment = workersPayPerHour * workingHours;

    double allExpenses = materialsPrice + workersWholePayment;

    cout << allExpenses << endl;

}

