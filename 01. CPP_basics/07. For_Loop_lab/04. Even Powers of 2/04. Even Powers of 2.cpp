#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int number = 0; number <= n; number += 2)
	{
		cout << pow(2, number) << endl;
	}
	
	return 0;
}

