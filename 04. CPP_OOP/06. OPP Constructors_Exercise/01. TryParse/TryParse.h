#ifndef TryParse_h
#define TryParse_h

#include <string>
#include <sstream>

bool tryParse(const std::string& text, int & num)
{
	std::istringstream istr(text);

	bool result = (bool)(istr >> num);

	return result;
}

#endif // !TryParse_h
