//cpp
#include "loops.h"
using std::cout;
int factorial(int num)
{
    int fact = 1;
    int i;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    cout<<"The factorial is "<<fact;

    return fact;
}
