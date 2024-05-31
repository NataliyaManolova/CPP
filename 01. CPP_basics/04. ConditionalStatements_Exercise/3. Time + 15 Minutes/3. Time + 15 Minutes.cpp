#include <iostream>
using namespace std;

int main()
{
    int hours, minutes;

    cin >> hours >> minutes;

    minutes += 15; // ili minutes = minutes + 15;

    if (minutes >= 60)
    {
        minutes -= 60;
        hours++; //hours += 1; hours = hours + 1;

        if (hours >= 24)
        {
            hours = 0;
        }

        if (minutes < 10)
        {
            cout << hours << ":0" << minutes;
        }
        else
        {
            cout << hours << ":" << minutes;
        }
    }
    else 
    {
        cout << hours << ":" << minutes;
    }
}

          // Proverqwame dali ostatuchnite minuti sled kato sme izwadili tezi 60 i sme dobawili 1 kum chasa i sme prowerili dali chasa e stanal 24 i ako e stanal go prawim 0.
          // i ostawa da prowerim dali tezi minuti sa po 10 i ako sa da sa s wodeshta nula