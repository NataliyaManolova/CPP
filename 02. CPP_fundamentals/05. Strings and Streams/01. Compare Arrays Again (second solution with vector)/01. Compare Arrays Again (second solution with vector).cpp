#include<iostream>
#include<string>
#include<sstream>
#include <vector>

//проверява дали два числови масива са еднакви

bool compareArray(const std::vector<int>& array1, const std::vector<int>& array2)
{
	if (array1.size() != array2.size())
		return false;

	for (int i = 0; i < array1.size(); i++)
	{
		if (array1[i] != array2[i])
			return false;
	}

	return true;
}

void stream(std::vector <int>& array, std::istringstream& stream)
{
	int number;

	while (stream >> number)
	{
		array.push_back(number);
	}
}

int main() {

	std::string str1, str2;

	std::getline(std::cin, str1);
	std::getline(std::cin, str2);

	std::istringstream stream1(str1);
	std::istringstream stream2(str2);

	std::vector <int> firstSequence, secondSequence;

	stream(firstSequence, stream1);
	stream(secondSequence, stream2);

	std::cout << (compareArray(firstSequence, secondSequence) ? "equal" : "not equal") << std::endl;
}