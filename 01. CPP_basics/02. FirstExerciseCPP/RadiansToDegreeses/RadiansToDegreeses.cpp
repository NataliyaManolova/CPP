#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double rad;

    cin >> rad;

    double deg = rad * 180 / 3.14;

    double result = round(deg);

    cout << result << endl;
}

