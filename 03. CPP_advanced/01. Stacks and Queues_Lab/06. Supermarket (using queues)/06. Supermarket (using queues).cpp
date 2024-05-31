#include <iostream>
#include <sstream>
#include <queue>

//Ако на входа се прочете име, то се добавя в queue, но ако се порочете "Paid", всички имена се отпечатват и queue се изпразва. Когато получим "End", трябва да се отпечата броя на оставащите хора в опашката във формат: "{count} оставащи хора.".

void customerNames(std::queue<std::string>& names) {

	while (!names.empty()) 
	{
		std::cout << names.front() << std::endl;
		names.pop();
	}
}

int main()
{
	std::string word;
	std::cin >> word;

	std::queue <std::string> names;
	
	while (word != "End")
	{
		if (word == "Paid")
		{
			customerNames(names);
		}
		else
		{
			names.push(word);
		}

		std::cin >> word;
	}

	std::cout << names.size() << " people remaining." << std::endl;

	return 0;
}