#include <iostream>
#include <map>
#include <vector>
#include <iomanip>

class Sale
{
    std::string town;
    std::string product;
    double price;
    double quantity;

public:
    Sale() : price(0), quantity(0) {}

    Sale(std::istream& istr)
    {
            istr >> town >> product >> price >> quantity;
    }

    //double getPrice() { return price; }
    //double getQuantity() { return quantity; }
    double getTotal() { return price * quantity; }
    const std::string& getTown() { return town; }
};

class Sales 
{
public:
    typedef std::vector<Sale> SalesData;

private:
    SalesData sales;

public:
    Sales(std::istream& istr);

    SalesData& getSales(void) { return sales; }
};

Sales::Sales(std::istream& istr)
{
    int salesNum;
    istr >> salesNum;

    sales.reserve(salesNum);
    while (salesNum--)
        sales.push_back(Sale(istr));
}

class ReportPerCity
{
    std::map <std::string, double> grossSales; //per city
public:
    ReportPerCity(Sales& s);

    void print(std::ostream& ostr);
};

ReportPerCity::ReportPerCity(Sales& s)
{
    Sales::SalesData data = s.getSales();

    for (Sale& sale : data)
    {
        grossSales[sale.getTown()] += sale.getTotal();
    }
}

void ReportPerCity::print(std::ostream& ostr)
{
    ostr << std::fixed << std::setprecision(2);

    for (auto curCity : grossSales)
    {
        ostr << curCity.first << " -> " << curCity.second << std::endl;
    }
}

int main()
{
    Sales s(std::cin);

    ReportPerCity r(s);

    r.print(std::cout);

    return 0;
}