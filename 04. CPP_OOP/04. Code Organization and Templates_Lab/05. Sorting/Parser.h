#ifndef PARSER_H
#define PARSER_H

#include <iostream>
#include <sstream>

using namespace std;
template <typename T> class Parser {

    istream& in;
    string endLine;

public:

    Parser(istream& in, const string& endLine) : in(in), endLine(endLine) {}

    bool readNext(T& n) {
        string buffer;
        getline(in, buffer);
        if (buffer == endLine)
            return false;

        istringstream istr(buffer);
        istr >> n;

        return true;
    }
};

#endif