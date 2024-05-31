#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    string seriesName;
    int episodeDuration, breakDuration;

    getline(cin, seriesName);
    cin >> episodeDuration >> breakDuration;

    double lunchTime = breakDuration * 1 / 8.0;
    double restTime = breakDuration * 1 / 4.0;

    double watchTime = breakDuration - lunchTime - restTime;

    if (watchTime >= episodeDuration)
    {
        double freeMoreMinutes = ceil(watchTime - episodeDuration);
        cout << "You have enough time to watch " << seriesName << " and left with " << freeMoreMinutes << " minutes free time." << endl;
    }
    else
    {
        double neededMinutes = ceil(episodeDuration - watchTime);
        cout << "You don't have enough time to watch " << seriesName << ", you need " << neededMinutes << " more minutes." << endl;
    }
}


