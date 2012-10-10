#include <iostream>
#include "dynaByte.h"
using namespace std;

int main()
{
    cout << "Olá Mundo!" << endl;
    dynaByte myByte;
    myByte.lowerByte.set(0,1);
    myByte.upperByte.set(0,1);
    cout << "lower byte value: " << myByte.lowerByte << endl;
    cout << "upper byte value: " << myByte.upperByte << endl;
    cout << "string lower:"<< myByte.strvalue() << endl;
    return 0;
}
