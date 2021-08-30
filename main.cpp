#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    int x=56, y=98;
    print_hello();
    cout << endl;
    cout << "GCD of " << x << " and " << y << " is " << gcd(x, y) << endl;
    return 0;
}
