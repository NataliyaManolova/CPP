#ifndef PRINTUTILS_H
#define PRINTUTILS_H


// printContainer<Set>(numbers.begin(), numbers.end());

template<class T> void printContainer(typename T::iterator begin, typename T::iterator end) {
    for (;begin != end; begin++) {
        cout << *begin << ' ';
    }
}


#endif