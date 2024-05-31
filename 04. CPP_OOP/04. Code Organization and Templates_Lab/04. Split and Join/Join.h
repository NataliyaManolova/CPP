#ifndef JOIN_H
#define JOIN_H

#include <vector>
#include <sstream>

using namespace std;

template<typename T> string join(const vector<T>& input, string joinStr) {
    ostringstream result;

    bool bFirst = true;
    for (const T& curr : input) {
        if (!bFirst)
            result << joinStr;
        else
            bFirst = false;
        result << curr;
    }

    return result.str();
}

#endif