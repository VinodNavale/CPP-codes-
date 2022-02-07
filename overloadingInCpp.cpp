#include<iostream>
using namespace std;

 

 

/*
    Function Overloading - In C++, we can have multiple functions with same name provided that, their signature is different.
            
            Signature -
                1. Number of arguments
                2. Data types of arguments
                3. Sequence of arguments
            Return type do not contribute to the signature
*/

 


int add(int a, int b)
{
    return a+b;
}

 

int add(int a, int b, int c)
{
    return a+b+c;
}

 

double add(double a, double b)
{
    return a+b;
}

 

double add(int a, double b)
{
    return a+b;
}

 

double add(double a, int b)
{
    return a+b;
}

 


int main()
{
    cout<<add(12,24)<<endl;
    cout<<add(12,24,10)<<endl;
    cout<<add(12.12,24.15)<<endl;
    cout<<add(12,24.1)<<endl;
    cout<<add(12.5,24)<<endl;    
    return 0;
}
