// C++ program to find GCD of two numbers
#include <iostream>
using namespace std;
// Recursive function to return gcd of a and b
int gcd(int a, int b)
{
    // Everything divides 0
    while(a!=b){
        if (a > b)
            a-=b;
        else
            b-=a;
    }
    return a;
}

// Driver program to test above function
int main()
{
    int a, b;
    cin>>a>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b);
    return 0;
}
