#include <iostream>
using namespace std;

int main()
{
    int examHour, examMinute, arriveHour, arriveMinute;
    cin >> examHour >> examMinute >> arriveHour >> arriveMinute;

    int examInMinutes = (examHour * 60) + examMinute;
    int arriveInMinutes = (arriveHour * 60) + arriveMinute;
    
    int differenceMinutes = arriveInMinutes - examInMinutes;

    if (differenceMinutes >= -30 && differenceMinutes <= 0)
    {
        cout << "On Time" << endl;

        int onTimeHours = abs(differenceMinutes) / 60;
        int onTimeMinutes = abs(differenceMinutes) % 60;

        if (onTimeHours == 0 && onTimeMinutes == 0)
        {
            return 0;
        }
        if (onTimeHours <= 0)
        {
            cout << onTimeMinutes << "minutes before the start" << endl;
        }
        else
        {
            if (onTimeMinutes < 10)
            {
                cout << onTimeHours << ":0" << onTimeMinutes << "minutes before the start" << endl;
            }
            else
            {
                cout << onTimeHours << ":" << onTimeMinutes << "minutes before the start" << endl;
            }


        }
    }
    else if (differenceMinutes >= 1)
    {
        cout << "Late" << endl;

        int lateHours = differenceMinutes / 60;
        int lateMinutes = differenceMinutes % 60;

        if (lateHours <= 0)
        {
            cout << lateMinutes << "minutes after the start" << endl;
        }
        else
        {
            if (lateMinutes < 10)
            {
                cout << lateHours << ":0" << lateMinutes << "hours after the start" << endl;
            }
            else
            {
                cout << lateHours << ":" << lateMinutes << "hours after the start" << endl;
            }


        }
    }
    else if (differenceMinutes < -30)
    {
        cout << "Early" << endl;

        int earlyHours = abs(differenceMinutes) / 60;
        int earlyMinutes = abs(differenceMinutes) % 60;

     

        if (earlyHours <= 0)
        {
            cout << earlyMinutes << "minutes before the start" << endl;
        }
        else
        {
            if (earlyMinutes < 10)
            {
                cout << earlyHours << ":0" << earlyMinutes << "hours before the start" << endl;
            }
            else
            {
                cout << earlyHours << ":" << earlyMinutes << "hours before the start" << endl;
            }
             
            
        }
    }
}

