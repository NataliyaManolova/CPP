#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int max = INT_MIN;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        sum += num;

        if (num > max)
        {
            max = num;
        }
    }
    sum -= max;
    
    int difference = abs(sum - max);

        if (sum == max)
        {
            cout << "Yes\n" << "Sum = " << sum << endl;
        }
        else
        {
            cout << "No\n" << "Diff = " << difference << endl;
        }
    return 0;
}

