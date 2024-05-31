#ifndef PRINT_UTILS_H
#define PRINT_UTILS_H

#include <vector>

using namespace std;

template<typename T> void printVector(const vector<T>& vect) {

    for (const T& curr : vect) {
        cout << curr << ' ';
    }
    cout << endl;
}


#endif