#include<iostream>
using namespace std;
/*
    When a function is returning a variable by reference then, function call can stand onto the LHS of assignment operator.
*/

 

char& fun(char *s)
{
    return s[0];
}

 


int main()
{
    char str[20]="KPIT";
    
    char ch='C';
    
    //ch=fun(str);
    
    fun(str)=ch; 
    
    cout<<str<<endl;
        
    return 0;
}
