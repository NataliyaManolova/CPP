#include <iostream>
#include <string>
using namespace std;

int main()
{
    int openTabs, salary;
    cin >> openTabs >> salary;
    

    for (int i = 1; i <= openTabs; i++)
    {
        string websiteNames;
        cin >> websiteNames;

        if (websiteNames == "Facebook")
        {
            salary -= 150;
        }
        else if (websiteNames == "Instagram")
        {
            salary -= 100;
        }
        else if (websiteNames == "Reddit")
        {
            salary -= 50;
        }
        
        if (salary <= 0)
    {
        cout << "You have lost your salary." << endl;

        return 0;
    }
    
    }
   
    cout << salary << endl;
}

