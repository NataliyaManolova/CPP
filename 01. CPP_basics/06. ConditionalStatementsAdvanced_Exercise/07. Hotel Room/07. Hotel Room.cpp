#include <iostream>
#include <string>
using namespace std;

int main()
{
    string month;
    int nights;

    cin >> month >> nights;

    double studioPricePerNight = 0;
    double apartmentPricePerNight = 0;

    double allPriceStudio = 0;
    double allPriceApartment = 0;

    if (month == "May" || month == "October")
    {
        if (nights > 7 && nights <= 14)
        {
            studioPricePerNight = 50 - (50.0 * 0.05);
            apartmentPricePerNight = 65.0;
        }
        else if (nights > 14)
        {
            studioPricePerNight = 50 - (50.0 * 0.3);
            apartmentPricePerNight = 65 - (0.1 * 65.0);
        }
        else
        {
            studioPricePerNight = 50.0;
            apartmentPricePerNight = 65.0;
        }
    }
    else if (month == "June" || month == "September")
    {
        if (nights > 14)
        {
            studioPricePerNight = 75.20 - (75.20 * 0.2);
            apartmentPricePerNight = 68.70 - (0.1 * 68.70);
        }
        else
        {
            studioPricePerNight = 75.20;
            apartmentPricePerNight = 68.70;
        }
        
    }
    else if (month == "July" || month == "August")
    {
        studioPricePerNight = 76.0;

        if (nights > 14)
        {
            apartmentPricePerNight = 77 - (77.0 * 0.1);
        }
        else
        {
            apartmentPricePerNight = 77.0;
        }
        
    }

    allPriceStudio = nights * studioPricePerNight;
    allPriceApartment = nights * apartmentPricePerNight;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Apartment: " << allPriceApartment << " lv." << endl;
    cout << "Studio: " << allPriceApartment << " lv." << endl;
}

