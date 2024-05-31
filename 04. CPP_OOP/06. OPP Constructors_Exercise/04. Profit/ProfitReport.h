#ifndef PROFIT_REPORT_H
#define PROFIT_REPORT_H

#include <istream>
#include <vector>
#include <sstream>
#include "Company.h"
#include "ProfitCalculator.h"


std::string getProfitReport(Company* fromInclusive, Company* toInclusive, std::map<int, ProfitCalculator>& profitCalculatorsByCompany)
{
	std::ostringstream ostr;

	for (;;)
	{
		ostr << fromInclusive->getName() << " = " << profitCalculatorsByCompany[fromInclusive->getId()].calculateProfit(*fromInclusive) << std::endl;

		if (fromInclusive == toInclusive)
			break;

		fromInclusive++;
	}

	return ostr.str();
}

#endif
