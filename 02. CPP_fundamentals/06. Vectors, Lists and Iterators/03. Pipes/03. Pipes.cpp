#include<iostream>
#include <vector>

// Трябва да се изчисли след колко години ще трябва да се сменят водоснабдителните тръби на града, като се вземе предвид, че те корозират с постоянно темпо. Първият ред на стандартния вход ще съдържа броя на тръбите. Вторият ред ще съдържа измерванията на всяка тръба, направени по време на тазгодишната проверка, което е една година след като тръбите са били поставени. Вторият ред е аналогичен на първия, но съдържа измерванията от миналата година, когато са монтирани тръбите.

int main()
{
	unsigned numberOfPipes;
	std::vector <unsigned> checkup;

	std::cin >> numberOfPipes;
	checkup.resize(numberOfPipes);

	unsigned cur;

	for (cur = 0; cur < numberOfPipes; cur++)
	{
		std::cin >> checkup[cur];
	}

	for (int cur = 0; cur < numberOfPipes; cur++)
	{
		unsigned installation;
		std::cin >> installation;

		unsigned amortization = installation - checkup[cur];
		unsigned lifeTimeOfPipe = installation / amortization;

		std::cout << lifeTimeOfPipe << ' ';
	}
	std::cout << std::endl;

	return 0;
}