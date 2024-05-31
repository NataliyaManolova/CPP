#include <iostream>
using namespace std;

int main()
{
    int penBags, markerBags, detergentInLiters, discountPercentage;

    cin >> penBags >> markerBags >> detergentInLiters >> discountPercentage;

    double penBagsPrice = penBags * 5.80;
    double markerBagsPrice = markerBags * 7.20;
    double detergentInLitersPrice = detergentInLiters * 1.20;

    double allMaterialsPrice = penBagsPrice + markerBagsPrice + detergentInLitersPrice;

    double priceAfterDiscount = allMaterialsPrice - (allMaterialsPrice * (discountPercentage / 100.0));

    cout << priceAfterDiscount << endl;

    
}

