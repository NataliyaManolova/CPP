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
			int searchId; //������� �� ������ �������� ����� �� getId()
			findData(int searchId) : searchId(searchId) {}

			bool operator () (const Company* other) { return other->getId() > searchId; }
			//���� � "������ ��������" ��� �������
			//������� �� ����� ������ ������ �� �� ������ �������� ���� id, ����� �� � ��-������ �� ������.
		} finder (c->getId());

		std::vector <const Company*>::iterator itFound = find_if(companies.begin(), companies.end(), finder);

		companies.insert(itFound, c); //��� �� ������ ��-������ id �� ����� �������� �������������� ��� ������� � ������ id �� ������� ����� ���� ����. ��� �� �� ������ id, ����� �� � ��-������, ������ ������ id � ���-������ �� ������ � �� �� ������ ����� companies.end(), ����� �� � �� �������� ����� ��� �������.
	}
};


#endif

