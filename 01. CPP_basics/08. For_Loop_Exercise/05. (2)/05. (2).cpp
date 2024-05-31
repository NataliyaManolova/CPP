#include <iostream>
#include <string>
using namespace std;

int main()
{
    int openTabs, salary;
    cin >> openTabs >> salary;


    int fine = 0;

    for (int i = 1; i <= openTabs; i++)
    {
        string websiteNames;
        cin >> websiteNames;

        if (websiteNames == "Facebook")
        {
            fine += 150;
        }
        else if (websiteNames == "Instagram")
        {
            fine += 100;
        }
        else if (websiteNames == "Reddit")
        {
            fine += 50;
        }

        if (salary <= fine)
        {
            cout << "You have lost your salary." << endl;
            return 0;
        }
    }

    double difference = salary - fine;

    cout << difference << endl;
}

