#include <iostream>
using namespace std;

int main()
{
    double age;
    string gender;
    cin >> age >> gender;

    if (age < 16)
    {
        if (gender == "f")
        {
            cout << "Miss" << endl;
        }
        else if (gender == "m")
        {
            cout << "Master" << endl;
        }
    }
    else
    {
        if (gender == "f")
        {
            cout << "Ms." << endl;
        }
        else if (gender == "m")
        {
            cout << "Mr." << endl;
        }
    }
    
}

