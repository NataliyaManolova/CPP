#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    char operation;

    int resultInt;
    double resultDouble;

    cin >> n1 >> n2 >> operation;

    if (n2 == 0)
    {
        cout << "Cannot divide " << n1 << " by zero" << endl;

        return 0;
    }

    if (operation == '+' || operation == '-' || operation == '*')
    {
        if (operation == '+')
        {
            resultInt = n1 + n2;
        }
        else if (operation == '-')
        {
            resultInt = n1 - n2;
        }
        else if (operation == '*')
        {
            resultInt = n1 * n2;
        }

        if (resultInt % 2 == 0)
        {
            cout << n1 << " " << operation << " " << n2 << " = " << resultInt << " - " << "even" << endl;
        }
        else
        {
            cout << n1 << " " << operation << " " << n2 << " = " << resultInt << " - " << "odd" << endl;
        }
    }
    else if (operation == '/')
    {
        resultDouble = (double)n1 / n2;

        cout.setf(ios::fixed);
        cout.precision(2);

        cout << n1 << " / " << n2 << " = " << resultDouble << endl;
    }
    else if (operation == '%')
    {
        resultInt = n1 % n2;
        cout << n1 << " % " << n2 << " = " << resultInt << endl;
    }
    
}

