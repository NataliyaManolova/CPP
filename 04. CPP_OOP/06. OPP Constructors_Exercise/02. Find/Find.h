#ifndef FIND_H
#define FIND_H

#include<vector>
#include "Company.h"

Company* find(const std::vector<Company*> & companies, int searchId)
{
	for(auto it = companies.begin(); it != companies.end(); it++)
	{
		if ((*it)->getId() == searchId)
			return *it;
	}

	return nullptr;
}

#endif // !FIND_H

