#ifndef OPERATORS_H
#define OPERATORS_H

#include <ostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

string operator + (const string & first, int num)
{
	ostringstream ostr;
	ostr << first << num;

	return ostr.str();
}

vector<string> & operator << (vector<string> & vec, const string & str)
{
	vec.push_back(str);
	return vec;
}

ostream& operator << (ostream& ostr, const vector<string> & vec)
{
	for (int i = 0; i < vec.size(); i++)
		ostr << vec[i] << std::endl;

	return ostr;
}

#endif // !OPERATORS_H
