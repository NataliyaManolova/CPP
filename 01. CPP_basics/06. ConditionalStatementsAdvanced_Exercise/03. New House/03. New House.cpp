#include <iostream>
using namespace std;

int main()
{
    string flower;
    cin >> flower;
    int numberOfFlowers, budget;
    cin >> numberOfFlowers >> budget;

    double price;
    double allMoneyForPay;

    double discount = 0.0;
    double morePrice = 0.0;

    if (flower == "Roses")
    {
        price = 5.0;
    }
    else if (flower == "Dahlias")
    {
        price = 3.80;
    }
    else if (flower == "Tulips")
    {
        price = 2.80;
    }
    else if (flower == "Narcissus")
    {
        price = 3.0;
    }
    else if (flower == "Gladiolus")
    {
        price = 2.50;
    }

    allMoneyForPay = numberOfFlowers * price;


    if (flower == "Roses" && numberOfFlowers > 80)
    {
        discount = 0.1;
    }
    else if ((flower == "Dahlias" && numberOfFlowers > 90) || flower == "Tulips" && numberOfFlowers > 80)
    {
        discount = 0.15;
    }
    else if (flower == "Narcissus" && numberOfFlowers < 120)
    {
        morePrice = 0.15;
    }
    else if (flower == "Gladiolus" && numberOfFlowers < 80)
    {
        morePrice = 0.2;
    }

    if (discount != 0)
    {
        allMoneyForPay = allMoneyForPay - (allMoneyForPay * discount);
    }
    else if (morePrice !=0)
    {
        allMoneyForPay = allMoneyForPay + (allMoneyForPay * morePrice);
    }
    
    double difference = budget - allMoneyForPay;
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    if (difference >= 0)
    {
        cout << "Hey, you have a great garden with " << numberOfFlowers << " " << flower << " and " << difference << " leva left." << endl;
    }
    else
    {
        cout << "Not enough money, you need " << abs(difference) << " leva more." << endl;
    }
}

