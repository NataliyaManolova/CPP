#ifndef RESOURCE_H
#define RESOURCE_H

#include "ResourceType.h"
#include <sstream>

namespace SoftUni {
	class Resource
	{
		int id;
		ResourceType rt;
		std::string url;

	public:
		bool operator < (const Resource & other) const
		{
			return this->id < other.id;
		}

		//int getId() const { return id; }
		ResourceType getType() const { return rt; }
		//std::string getUrl() const { return url; }

		friend std::istream& operator >> (std::istream& istr, Resource& r);
		friend std::ostream& operator << (std::ostream& ostr, const Resource& r);

	};

	std::istream& operator >> (std::istream& istr, ResourceType & rt) {
		
		std::string buff;
		istr >> buff;

		if(buff == "Presentation")
			rt = ResourceType::PRESENTATION;
		else if (buff == "Demo")
			rt = ResourceType::DEMO;
		else if (buff == "Video")
			rt = ResourceType::VIDEO;

		return istr;
	}

	std::istream& operator >> (std::istream& istr, Resource& r)
	{
		istr >> r.id >> r.rt >> r.url;
		
		return istr;
	}

	std::ostream& operator << (std::ostream& ostr, const Resource& r)
	{
		ostr << r.id << ' ' << r.rt << ' ' << r.url;
		
		return ostr;
	}
}


#endif // !RESOURCE_H 
