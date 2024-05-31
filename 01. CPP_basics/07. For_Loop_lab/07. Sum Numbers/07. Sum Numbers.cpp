#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int sum = 0;

	for (int number = 1; number <= n; number++)
	{
		int value;
		cin >> value;

		sum += value;
	}
	
	cout << sum << endl;
	
	return 0;
}

