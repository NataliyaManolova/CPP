#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int leftSum = 0;
    int rightSum = 0;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        leftSum += num;
    }

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        rightSum += num;
    }

    int difference = leftSum - rightSum;
    
    if (difference > 0 || difference < 0)
    {
        cout << "No, diff = " << abs(difference) << endl;
    }

    if (difference == 0)
    {
        cout << "Yes, sum = " << leftSum << endl;
    }
    return 0;
}

// if (leftSum == rightSum)
// {
//   cout << "Yes, sum = " << leftSum << endl;
// }
// else 
// {
//  int diff = abs(leftSum - rightSum);
//  cout << "No, diff = " << diff << endl;
// }

// return 0;
// }



