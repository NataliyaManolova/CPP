#ifndef MIN_BY_H
#define MIN_BY_H

#include <string>
#include <vector>

std::string minBy(std::vector<std::string> &data, bool (*lessBy)(const std::string& a, const std::string& b))
{
 	std::string lessString = data[0];
	for (std::string cur : data)
	{
		if (lessBy(cur, lessString))
		{
			lessString = cur;
		}
	}
	return lessString;
}

#endif // !MIN_BY_H
