#include "functions.h"
#include <iostream>
using namespace std;

//git is interesting

int factorial(int n){
    if(n==0)
    return 1;
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
