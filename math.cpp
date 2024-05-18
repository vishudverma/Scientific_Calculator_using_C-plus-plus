// This file contains all the operation logic and was the
// hardest to make cause i had to keep testing the logic again
// and again to fool-proof it just look at it

#include <iostream>
#include <cmath>

using namespace std;

long double a[], sum=0, diff=0, prod=0, quo=0;

//operating using array to maqximise output and manage 
//memory in the best way ppossible will implement linked 
//lists here  later

long double add(long double x[]= a)
{
    int size = sizeof(x)/sizeof(long double);
    for(int i=0; i < size; ++i)
    {
        sum += x[i];
    }

    return sum;
    // sum is the sum of n number
}

long double substract(long double x[]= a)
{
    for(int i=0; i < sizeof(x); ++i)
    {
        diff += x[i];
    }
    return diff;
    // diff is the difference of n number
}

long double multiply(long double x[] = a)
{
    int size = sizeof(x)/sizeof(long double);
    for(int i=0; i < size; ++i)
    {
        prod *= x[i];
    }
    return prod;
    // prod is the product of n number
}

long double division(long double x[] = a)
{
    int size = sizeof(x)/sizeof(long double);
    for(int i=0; i < 2; ++i)
    {
        quo /= x[i];
    }
    return quo;
    // quo is the quotient
}

//I wanted to code the log and sin languages myself but since i have been unable to find any documentation on it yet im giving 
//in the pressure and using cmath library(whose source code is also unavailable but hopefully ill be able to figure the operations out)

void main()
{
    cout << "Math";
}