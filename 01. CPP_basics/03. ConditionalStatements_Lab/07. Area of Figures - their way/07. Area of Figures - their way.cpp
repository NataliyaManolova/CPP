#include <iostream>
using namespace std;

int main()
{
    string figureType;
    cin >> figureType;


    double pi = 3.14159265359;
    double area = 0.0;

   

    if (figureType == "square") 
    { 
        double a; cin >> a; area = a * a; 
    }
    else if (figureType == "rectangle") 
    { 
        double a, b; cin >> a >> b; area =  a * b; 
    }
    else if (figureType == "circle") 
    { 
        double r; cin >> r; area = pi * r * r; 
    }
    else if (figureType == "triangle") 
    { 
        double a, h; cin >> a >> h; area = (a * h) / 2; 
    }
   
    cout.setf(ios::fixed);
    cout.precision(3);
    cout << area << endl;

    return 0;
    
}

