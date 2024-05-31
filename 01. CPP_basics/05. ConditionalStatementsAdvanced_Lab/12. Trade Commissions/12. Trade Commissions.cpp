#include <iostream>
using namespace std;

int main()
{
    string city;
    double sales;
    cin >> city >> sales;

    double commission = -1.0;

        if (city == "Sofia")
        {
            if (sales >= 0 && sales <= 500)
            {
                commission = 0.05;
            }
            else if (sales > 500 && sales <= 1000)
            {
                commission = 0.07;
            }
            else if (sales > 1000 && sales <= 10000)
            {
                commission = 0.08;
            }
            else if (sales > 10000)
            {
                commission = 0.12;
            }
        }
        else if (city == "Varna")
        {
            if (sales >= 0 && sales <= 500)
            {
                commission = 0.045;
            }
            else if (sales > 500 && sales <= 1000)
            {
                commission = 0.075;
            }
            else if (sales > 1000 && sales <= 10000)
            {
                commission = 0.1;
            }
            else if (sales > 10000)
            {
                commission = 0.13;
            }
        }
        else if (city == "Plovdiv")
        {
            if (sales >= 0 && sales <= 500)
            {
                commission = 0.055;
            }
            else if (sales > 500 && sales <= 1000)
            {
                commission = 0.08;
            }
            else if (sales > 1000 && sales <= 10000)
            {
                commission = 0.12;
            }
            else if (sales > 10000)
            {
                commission = 0.145;
            }
        }

        if (commission > 0)
        {
            cout.setf(ios::fixed);
            cout.precision(2);

            cout << commission * sales << endl;
        }
        else
        {
            cout << "error" << endl;
        }
}

