#include <iostream>

const unsigned maxSize = 200;

bool array(int arr[], unsigned& arrSize)
{
    std::cin >> arrSize;

    if (arrSize > maxSize)
    {
        return false;
    }

    for (int i = 0; i < arrSize; i++)
    {
        std::cin >> arr[i];
    }

    return true;
}

int main()
{
    int arr[maxSize];
    unsigned arrSize;

    array(arr, arrSize);

    unsigned absoluteDifference = 0;

    for(int first = 0; first < arrSize; first++)
        for (int second = 0; second < arrSize; second++)
        {
            int difference;

                difference = abs(arr[first] - arr[second]);

            /*if (arr[first] > arr[second])
                difference = arr[first] - arr[second];
            else
                difference = arr[second] - arr[first];*/


            if (absoluteDifference == 0)
                absoluteDifference = difference;
            else if (difference != 0 && difference < absoluteDifference)
                absoluteDifference = difference;
        }

    std::cout << absoluteDifference << std::endl;

    return 0;

}

