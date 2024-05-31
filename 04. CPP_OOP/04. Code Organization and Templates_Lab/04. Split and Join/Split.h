#ifndef SPLIT_H
#define SPLIT_H

#include <vector>
#include <sstream>
using namespace std;

template <typename T> vector<T> split(const string & line, char separator)
{
	vector<T> result;

	istringstream stream(line);
	string cur;

	while (getline(stream, cur, separator)) {
		istringstream bufferStream(cur);
		T temp;
		bufferStream >> temp;
		result.push_back(temp);
	}
	return result;
}

#endif