#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int evenNumbers = 0;
	int oddNumbers = 0;

	for (int i = 0; i < n; i++)
	{
		int number;
		cin >> number;

		if (i % 2 == 0)
		{
			evenNumbers += number;
		}
		else
		{
			oddNumbers += number;
		}
	}

	int difference = abs(evenNumbers - oddNumbers);
	
	if (evenNumbers == oddNumbers)
	{
		cout << "Yes\n" << "Sum = " << evenNumbers << endl;
	}
	else if (evenNumbers != oddNumbers)
	{
		cout << "No\n" << "Diff = " << difference << endl;
	}

	return 0;
}

