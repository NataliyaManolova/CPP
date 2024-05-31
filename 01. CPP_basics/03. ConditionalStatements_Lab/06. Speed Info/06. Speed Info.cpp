#include <iostream>
using namespace std;

int main()
{
    double number;
    cin >> number;

    if (number <= 10) 
    { 
        cout << "slow"; 
    }
    else if (number <= 50) 
    { 
        cout << "average"; 
    }
    else if (number <= 150) 
    { 
        cout << "fast";
    }
    else if (number <= 1000) 
    { 
        cout << "ultra fast";
    }
    else 
    { 
        cout << "extremely fast";
    }

    return 0;
}

