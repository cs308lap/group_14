#include "functions.h"
#include <iostream>
using namespace std;

int factorial(int n){
    while(n<0)
    {   int num;
        cout<<"Please enter a positive number\n";
        cin>>num;
        n=num;
    }
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
