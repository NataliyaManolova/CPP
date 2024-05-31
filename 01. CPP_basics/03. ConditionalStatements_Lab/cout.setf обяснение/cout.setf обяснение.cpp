#include <iostream>
using namespace std;

int main()
{
    double sum = 6.7538435734;

    cout.setf(ios::fixed); // input output stream искаме да е fixed/фиксиран
    cout.precision(2);
    // всеки cout под този ще се форматира до втория знак
    cout << sum << endl;

    // но ако напишем това:
    cout.precision(5);
    //всеки cout под този ще се форматира до петия знак

    cout << sum << endl;

    return 0;
}

