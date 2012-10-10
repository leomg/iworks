#ifndef DYNABYTE_H
#include <iostream>
#include <string>
#include <bitset>
#define DYNABYTE_H
using namespace std;

class dynaByte
{
    public:
        dynaByte();
        string strvalue();
        bitset<262144> lowerByte;
        bitset<262144> upperByte;
        virtual ~dynaByte();
    protected:
    private:
};

#endif // DYNABYTE_H
