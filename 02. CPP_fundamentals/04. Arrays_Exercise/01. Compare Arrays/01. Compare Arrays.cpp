#include <iostream>

const unsigned maxSize = 200;

bool areEqual(int arr1[], int lenght1, int arr2[], int lenght2)
{
	if (lenght1 != lenght2)
		return false;

	for (int i = 0; i < lenght1; i++)
		if (arr1[i] != arr2[i])
			return false;

	return true;

}

bool array(int arr[], int & arrSize)
{
	

	if (arrSize > maxSize)
		return false;

	for (int i = 0; i < arrSize; i++)
		std::cin >> arr[i];

	return true;
}

int main()
{
	int arr1Size;
	int arr1[maxSize];

	if (array(arr1, arr1Size) == false)
		return -1;
	  
	int arr2Size;
	int arr2[maxSize];

	if (array(arr2, arr2Size) == false)
		return -1;

	if (areEqual(arr1, arr1Size, arr2, arr2Size))
		std::cout << "equal" << std::endl;
	else
		std::cout << "Not equal" << std::endl;

}

