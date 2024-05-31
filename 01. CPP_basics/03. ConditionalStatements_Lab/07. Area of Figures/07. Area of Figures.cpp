#include <iostream>
using namespace std;

int main()
{
    string figureType;
    cin >> figureType;

    
    double pi = 3.14159265359;

    cout.setf(ios::fixed);
    cout.precision(3);

    if (figureType == "square") 
    { 
        double a; cin >> a; cout << a * a;
    }
    else if (figureType == "rectangle") 
    { 
        double a, b; cin >> a >> b; cout << a * b;
    }
    else if (figureType == "circle") 
    { 
        double r; cin >> r; cout << pi * r * r;
    }
    else if (figureType == "triangle") 
    { 
        double a, h; cin >> a >> h; cout << (a * h) / 2; 
    }

    return 0;
}

