#include <iostream>
using namespace std;

int main()
{
    int bookPages;
    int readedPagesForHour;
    int maximumDays;

    cin >> bookPages >> readedPagesForHour >> maximumDays;

    int hoursNeededForBook = bookPages / readedPagesForHour;
    int hoursEveryDay = hoursNeededForBook / maximumDays;

    cout << hoursEveryDay << endl;

}

