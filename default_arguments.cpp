//Default Argument Value
#include<iostream>
using namespace std;

 

int add(int, int, int, int=0, int=0); //declaration/prototype

 

int main()
{
    cout<<add(1,2,3,4,5)<<endl;
    
    cout<<add(1,2,3,4)<<endl;  //call
    
    cout<<add(1,2,3)<<endl;

 

    return 0;
}

 

int add(int a, int b, int c, int d, int e) //definition
{
    return a+b+c+d+e;
}
