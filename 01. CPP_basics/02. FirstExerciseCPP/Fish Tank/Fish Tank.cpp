#include <iostream>
using namespace std;

int main()
{
    int length, width, height;
    double percentage;

    cin >> length >> width >> height >> percentage;

    double volumeInCM = length * width * height;
    double liters = volumeInCM / 1000;

    double unusedLiters = liters * (percentage / 100.0);
    double usedLiters = liters - unusedLiters;

    cout << usedLiters << endl;

 
    
}

// V = a*b*h za paralelepipet
// 10 cm = 1 dm
// 1 dm = 1000 dm3