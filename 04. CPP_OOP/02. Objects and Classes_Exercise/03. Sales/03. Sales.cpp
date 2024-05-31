#include <iostream>
#include <map>
#include <sstream>
#include <iomanip>

class Sales
{
    typedef std::map<std::string, double> Sale;
    Sale sale;

    std::string town;
    std::string product;
    double price = 0;
    double quantity = 0;

public:
    Sales() {};

    Sales(std::istream& istr, int count)
    {
        while (count--)
        {
            istr >> town >> product >> price >> quantity;
            sale[town] += (price * quantity);
        }
    }

    std::string getInfo()
    {    
        std::ostringstream ostr;

        auto it = sale.begin();
        for (; it != sale.end(); it++)
        {
            ostr << it->first << " -> " << std::fixed << std::setprecision(2) << it->second << std::endl;
        }

        return ostr.str();
    }
};

int main()
{
    int count;
    std::cin >> count;

    Sales ss(std::cin, count);
    std::cout << ss.getInfo();

    return 0;
}