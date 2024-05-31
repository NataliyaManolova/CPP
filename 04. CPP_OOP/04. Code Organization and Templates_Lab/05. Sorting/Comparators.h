#ifndef COMPARATORS_H
#define COMPARATORS_H

template<typename T> class LessThan {

public:

    bool operator()(const T& first, const T second) const {
        return first < second;
    }
};

template<typename T, typename Comparator> struct Reverse {

    bool operator()(const T& first, const T& second) const {
        Comparator comparator;
        return !comparator(first, second);
    }

};

#endif