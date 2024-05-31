#include <iostream>
#include <stack>
#include <sstream>

//Програмата симулира моден бутик, който получава доставка на дрехи веднъж месечно. Дрехите трябва да се подредят от последното облекло в горната част на купчината до първото в дъното, тоест чрез stack. Всяка дреха има своя стойност(обем) (int). Ще бъде дадено цяло число, представляващо капацитета на един стелаж. Обема на дрехите се събера в отделна променлива. Когато обема на дрехите стане по голям от капацитета на стелажа, тогава се използва следващият стелаж, които е със същия капацитет като предходния. Накрая трябва да се отпечата на конзолата, колко стелажи са използвани, за да подредят всички дрехи.

int main()
{
    std::string clothes;
    std::getline(std::cin, clothes);

    std::istringstream stream(clothes);

    std::stack <int> allClothes;

    int cur;

    while (stream >> cur)
    {
        allClothes.push(cur);
    }

    int rackCapacity;
    std::cin >> rackCapacity;

    int sum = 0;
    int countRack = 1;

    while (allClothes.size())
    {
        int curItem = allClothes.top();
        allClothes.pop();
        sum += curItem;

        if (rackCapacity < sum) // тук стелажа е пълен
        {
            sum = curItem; // затова вместо да пишем sum = 0, направо приравняваме sum на обема на дрехата, която не сме могли да сложим на този стелаж. Така нейният обем ще се приравни към общия обем на дрехите, които ще са сложени на следващия стелаж.
            countRack++;
        }
    }

    std::cout << countRack << std::endl;

    return 0;
}