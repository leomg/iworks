#include "dynaByte.h"
#include <iostream>
#include <bitset>
#include <string>
using namespace std;
dynaByte::dynaByte()
{
    cout << "Construtora da classe..."<<endl;
    //ctor
}

dynaByte::~dynaByte()
{
    //dtor
}
string dynaByte::strvalue()
{
    string result = lowerByte.to_string();
    return result;
}
