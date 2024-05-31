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
        //първо компилатора ще намери, на колко е равно arr[i]
        //и след това ще го използва като индекс за да адресира съответната клетка от counts, която ще увеличи с единица
    }

    return true;

}

int main()
{
    unsigned arrSize;
    int arr[maxSize];

    array(arr, arrSize);

    unsigned counts[10] = {};

    for (int i = 0; i < arrSize; i++)
    {
        counts[arr[i]]++;
    }

    unsigned maxCount = 0;

    for (int i = 0; i < 10; i++)
    {
        if (counts[i] > maxCount)
            maxCount = counts[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if(counts[i] == maxCount)
            std::cout << i << " ";

    }
    std::cout << std::endl;

    return 0;

}