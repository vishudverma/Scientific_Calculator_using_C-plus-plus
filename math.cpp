// This file contains all the operation logic and was the
// hardest to make cause i had to keep testing the logic again
// and again to fool-proof it just look at it

#include <iostream>
#include <cmath>

using namespace std;

class Operations{
    long double ans = 0;
    //operating using array to maximise output and manage 
    //memory in the best way ppossible will implement linked 
    //lists here  later

    /// @brief addition program
    /// @param x array of numbers
    /// @return gives the sum of all the numbers
    long double add(long double x[])
    {
        int size = sizeof(x)/sizeof(long double);
        for(int i=0; i < size; ++i)
        {
            ans += x[i];
        }

        return ans;
    }

    /// @brief substration program
    /// @param x the array that contains both the values
    /// @return final answer after all the number are compiled
    long double substract(long double x[])
    {
        for(int i=0; i < sizeof(x); ++i)
        {
            ans += x[i];
        }
        return ans;
    }

    /// @brief multiplication of n numbers
    /// @param x the array for the input
    /// @return quotient of all the numbers at once
    long double multiply(long double x[])
    {
        int size = sizeof(x)/sizeof(long double);
        for(int i=0; i < size; ++i)
        {
            ans = 1;
            ans *= x[i];
        }
        return ans;
    }

    /// @brief division of all the number(taken 2 at a time)
    /// @param x array of numbers
    /// @return quotient 
    long double division(long double x[])
    {
        int size = sizeof(x)/sizeof(long double);
        for(int i=0; i < 2; ++i)
        {
            if(i == 0)
            {
                ans = x[i];//initialising the first number in the division the dividend
            }
            else
            {
                ans /= x[i];//dividing the dividend by the divisor
            }
        }
        return ans;
    }

    /// @brief perform the log operation
    /// @param x array of number whose size is being found
    /// @return final value after performin the log operation
    long double logarithm(long double x[])
    {
        int size = sizeof(x)/sizeof(long double);
        int ln,lg,b = 'e';//ln->natural log base e; lg->artificial log base 10;b->given base input
        for(int i=0; i < size; ++i)
        {
            if(b == 'e'){
                ln = log(x[i]);//log base e function
                ans = ln;
            }
            else if(b == 10){
                lg = log10(x[i]);//log base 10 function
                ans = lg;
            }
            else{
                double y,z,answ;
                y = log(x[i]);
                z = log(b);
                answ = y/z;
                ans = answ;//log base b function
            }
            return ans;
        }
    }
    //plan to call sin and cos functions directly from the cmath library so not gonna write them here if some new code logic is to be made
    //then i will write them here.
    //I wanted to code the log and sin languages myself but since i have been unable to find any documentation on it yet im giving 
    //in the pressure and using cmath library(whose source code is also unavailable but hopefully ill be able to figure the operations out)
};


int main()
{
    cout << "Math";
    return 0;
}
