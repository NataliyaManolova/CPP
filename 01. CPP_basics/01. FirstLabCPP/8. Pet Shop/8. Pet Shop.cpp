#include <iostream>
using namespace std;

int main()
{
    int dogFood;
    int catFood;

    cin >> dogFood >> catFood;

    double costOfDogFood = dogFood * 2.5;
    int costOfCatFood = catFood * 4;
    double costOfTheFood = costOfDogFood + costOfCatFood;

    cout << costOfTheFood << " lv.";

    return 0;

}
// Tips for Getting Started: 
//Moje sushto -  cout << (dogFood * 2.5) + (catFood * 4) << " lv."; vednaga sled cin