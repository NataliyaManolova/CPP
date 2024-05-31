#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double worldRecord, distanceInM, timeForDistanceInM;

    cin >> worldRecord >> distanceInM >> timeForDistanceInM;

    double allDistanceInSecond = distanceInM * timeForDistanceInM;

    double wasteSeconds = floor(distanceInM / 15) * 12.5;

    double allTime = allDistanceInSecond + wasteSeconds;

    double difference =  allTime - worldRecord;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (worldRecord > allTime)
    {
        cout << "Yes, he succeeded! The new world record is " << allTime << " seconds." << endl;
    }
    else
    {
        cout << "No, he failed! He was " << difference << " seconds slower." << endl;
    }

}

