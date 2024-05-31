#ifndef CAR_H
#define CAR_H
using namespace std;

class Car
{
    string sBrand;
    string sModel;
    int nYear;

public:
    Car(const string & sBrand, const string & sModel, int nYear) : sBrand(sBrand), sModel(sModel), nYear(nYear) {};

    const string GetBrand(void) const { return sBrand; }
    const string GetModel(void) const { return sModel; }
    int GetYear(void) const { return nYear; }
};

#endif // !CAR_H
#pragma once
