#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int p1Counter = 0;
	int p2Counter = 0;
	int p3Counter = 0;
	int p4Counter = 0;
	int p5Counter = 0;

	for (size_t i = 0; i < n; i++)
	{
		int num;
		cin >> num;

		if (num < 200)
		{
			p1Counter++;
		}
		else if (num >= 200 && num <= 399)
		{
			p2Counter++;
		}
		else if (num >= 400 && num <= 599)
		{
			p3Counter++;
		}
		else if (num >= 600 && num <= 799)
		{
			p4Counter++;
		}
		else if (num >= 800)
		{
			p5Counter++;
		}
	}

	double p1Percentage = (double)p1Counter / n * 100.0;
	double p2Percentage = (double)p2Counter / n * 100.0;
	double p3Percentage = (double)p3Counter / n * 100.0;
	double p4Percentage = (double)p4Counter / n * 100.0;
	double p5Percentage = (double)p5Counter / n * 100.0;


	cout.setf(ios::fixed);
	cout.precision(2);

	cout << p1Percentage << "%" << endl;
	cout << p2Percentage << "%" << endl;
	cout << p3Percentage << "%" << endl;
	cout << p4Percentage << "%" << endl;
	cout << p5Percentage << "%" << endl;
	
	return 0;
}

