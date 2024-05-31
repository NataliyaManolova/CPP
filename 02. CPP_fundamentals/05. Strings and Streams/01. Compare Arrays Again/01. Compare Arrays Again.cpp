#include <iostream>
#include <array>
#include <sstream>
# include <string>

//проверява дали два числови масива са еднакви

const unsigned maxSize = 200;

bool areEqual(const int arr1[], int size1, const int arr2[], int size2)
{
    if (size1 != size2)
        return false;

    for (int i = 0; i < size1; i++)
    {
        if (arr1[i] != arr2[i])
            return false;
    }

    return true;
}

int parseArray(int arr[], std::istringstream & stream)
{ 
    int currentNumber;
    int index = 0;

    while (stream >> currentNumber)
    {
        arr[index] = currentNumber;

    if (++index >= maxSize)
        return -1;
    }

    return index;
}


int main()
{
    std::string str1, str2;

    getline(std::cin, str1);
    getline(std::cin, str2);

    int arr1[maxSize], arr2[maxSize];

    std::istringstream stream1(str1);
    std::istringstream stream2(str2);

    int arr1Size = parseArray(arr1, stream1);
    int arr2Size = parseArray(arr2, stream2);

    std::cout << (areEqual(arr1, arr1Size, arr2, arr2Size) ? "equal" : "not equal") << std::endl;
}

