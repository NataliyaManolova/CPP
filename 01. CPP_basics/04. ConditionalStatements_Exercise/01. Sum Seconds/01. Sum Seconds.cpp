#include <iostream>
using namespace std;

int main()
{
    int time1, time2, time3;
    cin >> time1 >> time2 >> time3;

    int totalTime = time1 + time2 + time3;

    int totalMinutes = totalTime / 60;
    int totalSeconds = totalTime % 60;

    if(totalSeconds < 10)
    {
        cout << totalMinutes << ":0" << totalSeconds;
    }
    else 
    {
        cout << totalMinutes << ":" << totalSeconds;
    }
    return 0;
}



