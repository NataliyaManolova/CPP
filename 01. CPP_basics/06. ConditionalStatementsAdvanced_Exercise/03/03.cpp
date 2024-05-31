#include <iostream>
using namespace std;

int main()
{
    string flower;
    cin >> flower;
    int numberOfFlowers, budget;
    cin >> numberOfFlowers >> budget;

    double price = 0.0;
    double discount = 0.0;

    if (flower == "Roses" && numberOfFlowers < 80)
    {
        price = 5 * numberOfFlowers;
    }
    else if (flower == "Roses" && numberOfFlowers > 80)
    {
        price = 5 * numberOfFlowers - (5 * numberOfFlowers * 0.1);
    }
    else if (flower == "Dahlias" && numberOfFlowers < 90)
    {
        price = 3.80 * numberOfFlowers;
    }
    else if (flower == "Dahlias" && numberOfFlowers > 90)
    {
        price = 3.80 * numberOfFlowers - (3.80 * numberOfFlowers * 0.15);
    }
    else if (flower == "Tulips" && numberOfFlowers < 80)
    {
        price = 2.80 * numberOfFlowers;
    }
    else if (flower == "Tulips" && numberOfFlowers > 80)
    {
        price = 2.80 * numberOfFlowers - (2.80 * numberOfFlowers * 0.15);
    }
    else if (flower == "Narcissus" && numberOfFlowers > 120)
    {
        price = 3.00 * numberOfFlowers;
    }
    else if (flower == "Narcissus" && numberOfFlowers < 120)
    {
        price = 3.00 * numberOfFlowers + (3.00 * numberOfFlowers * 0.15);
    }
    else if (flower == "Gladiolus" && numberOfFlowers > 80)
    {
        price = 2.50 * numberOfFlowers;
    }
    else if (flower == "Gladiolus" && numberOfFlowers < 80)
    {
        price = 2.50 * numberOfFlowers + (2.50 * numberOfFlowers * 0.20);
    }

    double difference = budget - price;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (budget >= price)
    {
        cout << "Hey, you have a great garden with " << numberOfFlowers << " " << flower << " and " << difference << " leva left." << endl;
    }
    else if (price > budget)
    {
        cout << "Not enough money, you need " << abs(difference) << " leva more." << endl;
    }
}

