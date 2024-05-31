#include <iostream>
#include <set>
#include <map>
#include <algorithm>

//Трябва данните дадени на конзолата да се филтрират по контитенти, държави и градове

int main()
{
    int continents;
    std::cin >> continents;

    std::map <std::string, std::map<std::string, std::set<std::string>>> allData;

    while (continents--)
    {
        std::string continent, country, city;
        std::cin >> continent >> country >> city;

        allData[continent][country].insert(city);
    }

    auto iterContinent = allData.begin();

    for (; iterContinent != allData.end(); iterContinent++)
    {
        std::cout << iterContinent->first << ":" << std::endl;

        auto iterCountry = iterContinent->second.begin();

        for (; iterCountry != iterContinent->second.end(); iterCountry++)
        {
            std::cout << iterCountry->first << " -> ";

            std::set<std::string>& allCities = iterCountry->second;

            bool isFirst = true;

            for (std::string city : allCities)
            {
                if (isFirst)
                    isFirst = false;
                else
                    std::cout << ", ";

                std::cout << city;
            }

            std::cout << std::endl;
        }
    }

    return 0;
}