// C++ program to find GCD of two numbers
#include <iostream>
#include "functions.h"
using namespace std;
// Recursive function to return gcd of a and b
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);

}
