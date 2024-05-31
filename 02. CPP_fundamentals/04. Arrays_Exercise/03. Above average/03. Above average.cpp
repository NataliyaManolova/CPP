#include <iostream>

const unsigned maxSize = 200;

bool array(int arr[], unsigned & arrSize)
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

    if (array(arr, arrSize) == false)
    {
        return -1;
    }

    int allNumbers = 0;
    int average = 0;

    for (int i = 0; i < arrSize; allNumbers += arr[i], i++);
    
    average = allNumbers / arrSize;

    for (int i = 0; i < arrSize; i++)
    {

        if (average <= arr[i])
        {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << std::endl;

    return 0;

}

