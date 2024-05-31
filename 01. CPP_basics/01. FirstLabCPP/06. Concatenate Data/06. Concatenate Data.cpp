#include <iostream>
using namespace std;

int main()
{
    string firstname;
    string lastname;
    int age;
    string town;

    cin >> firstname >> lastname >> age >> town;

    cout << "You are " << firstname << " " << lastname << ", a " << age << "-years old person from " << town << ".";

    return 0;
}

