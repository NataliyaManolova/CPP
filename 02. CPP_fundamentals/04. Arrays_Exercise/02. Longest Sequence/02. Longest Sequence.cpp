#include <iostream>

const unsigned maxSize = 200;

bool array(int arr[], unsigned & arrSize)
{
	std::cin >> arrSize;

	if (arrSize > maxSize)
		return false;

	for (int i = 0; i < arrSize; i++)
	{
		std::cin >> arr[i];

	}

	return true;
}



int main()
{
	unsigned arrSize;
	int arr[maxSize];

	if (array(arr, arrSize) == false)
		return -1;

	int maxSize = 0;
	int finalNumber = 0;

	int currentSize = 1;
	int currentNumber = arr[0];

	for (int i = 1; i < arrSize; i++)
	{
		if (arr[i] == currentNumber)
		{
			currentSize++;
		}
		else
		{
			if (currentSize >= maxSize)
			{
				maxSize = currentSize;
				finalNumber = currentNumber;
			}

		currentSize = 1;
		currentNumber = arr[i];

		}


	}

	if (currentSize >= maxSize)
	{
		maxSize = currentSize;
		finalNumber = currentNumber;
	}

	for (int i = 0; i < maxSize; i++)
	{
		std::cout << finalNumber << " ";
		
	}
	std::cout << std::endl;
	
	return 0;

}

