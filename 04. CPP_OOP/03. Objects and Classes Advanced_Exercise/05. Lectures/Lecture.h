#ifndef LECTURE_H
#define LECTURE_H

#include "Resource.h"
#include <set>
#include <map>
#include <vector>

namespace SoftUni
{
	class Lecture
	{
		typedef std::set<Resource> ResourceSet;
		ResourceSet resources;

		std::map <ResourceType, int> resourceTypes;

	public:
		Lecture & operator << (const Resource& r)
		{
			auto it = resources.find(r);

			if (it == resources.end())
			{
				resources.insert(r);
				resourceTypes[r.getType()]++;
			}
			else
			{
				resources.erase(it);
				resources.insert(r);
			}

			return *this;
		}

		ResourceSet::iterator begin() { return resources.begin(); }
		ResourceSet::iterator end() { return resources.end(); }

		friend std::vector <ResourceType>& operator << (std::vector <ResourceType>& vec, const Lecture& lec);

		int operator [] (ResourceType rt)
		{
			if (resourceTypes.find(rt) != resourceTypes.end())
				return resourceTypes[rt];
			else
				return 0;
		}
	};
	
	std::vector <ResourceType>& operator << (std::vector <ResourceType>& vec, const Lecture& lec)
	{
		for (auto type : lec.resourceTypes)
		{
			vec.push_back(type.first);
		}

		return vec;
	}

}

#endif