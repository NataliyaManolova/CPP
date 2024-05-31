#include <iostream>
using namespace std;

int main()
{
    double squareMeters;

    cin >> squareMeters;

    double priceWithoutDiscount = squareMeters * 7.61;
    double discount = priceWithoutDiscount * 0.18;
    
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "The final price is: " << priceWithoutDiscount - discount << " lv." << endl;
    cout << "The discount is: " << discount << " lv." << endl;

    return 0;

}

