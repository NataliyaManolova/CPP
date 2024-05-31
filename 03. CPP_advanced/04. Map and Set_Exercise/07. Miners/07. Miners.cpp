#include <iostream>
#include <map>
#include <vector>

//Всеки нечетен ред на конзолата представлява ресурс, а всеки четен – количество. Накрая трябва да се отпечата количеството на всеки ресурс. Трябва да е в реда на влизане на данните, а не да е сортирано по друг начин.

int main()
{
    std::map<std::string, int> allData;
    std::vector<std::string> toKeepOrder;

    while (true)
    {
        std::string resources;
        std::cin >> resources;

        if (resources == "stop")
            break;
        
        int quantity;
        std::cin >> quantity;

        auto it = allData.find(resources);

        if (it == allData.end())
            toKeepOrder.push_back(resources);

        allData[resources] += quantity;
    }

    for (std::string data : toKeepOrder)
    {
        std::cout << data << " -> " << allData[data] << std::endl;
    }

    return 0;
}