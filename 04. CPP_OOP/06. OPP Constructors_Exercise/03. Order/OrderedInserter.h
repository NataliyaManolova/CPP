#ifndef ORDERED_INSERTER_H
#define ORDERED_INSERTER_H

#include<vector>
#include<algorithm>
#include "Company.h"

class OrderedInserter
{
	std::vector<const Company*> & companies;
public:
	OrderedInserter(std::vector<const Company*> & companies) : companies(companies) {}

	void insert(const Company* c)
	{
		struct findData
		{
			int searchId; //записва се новата стойност взета от getId()
			findData(int searchId) : searchId(searchId) {}

			bool operator () (const Company* other) { return other->getId() > searchId; }
			//това е "унарен предикат" или функтор
			//итерира се целия вектор докато не се намери записано вече id, което да е по-голямо от новото.
		} finder (c->getId());

		std::vector <const Company*>::iterator itFound = find_if(companies.begin(), companies.end(), finder);

		companies.insert(itFound, c); //ако се намери по-голямо id се прима неговото местоположение във вектора и новото id се записва точно пред него. Ако не се намери id, което да е по-голямо, тогава новото id е нах-голямо по размер и ще се запише преди companies.end(), тоест ще е на последно място във вектора.
	}
};


#endif

