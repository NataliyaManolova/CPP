#ifndef SUMOFVECTORS_H
#define SUMOFVECTORS_H

#include <string>
#include <vector>

using namespace std;

vector<string> operator + (const vector<string>& first, const vector<string>& second)
{
	vector<string> result;

	for (size_t i = 0; i < first.size(); i++)
	{
		string newString = first[i] + " " + second[i];
		
		result.push_back(newString);
	}	

	return result;
}

#endif // !SUMOFVECTORS_H

