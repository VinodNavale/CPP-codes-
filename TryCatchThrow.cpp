#include<iostream>
using namespace std;

 

//Exception - It is defined as run time anomaly.   keywords - try, catch, throw

 

class A
{
};

 

float Divide(int num, int den)
{
    A a;
    if(den==0)
    {
        throw 3.456f;
    }        
    return (float)num/den;
}

 


int main()
{
    int a=10, b=0;
    
    try
    {
        Divide(a,b);
    }
    catch(int i)
    {
        cout<<"int - Denomenator is zero"<<endl;
    }
    catch(const char* s)
    {
        cout<<"const char* - Denomenator is zero"<<endl;
    }
    catch(A a)
    {
        cout<<"A - Denomenator is zero"<<endl;
    }
    catch(...)
    {
        cout<<"universal catch - Denomenator is zero"<<endl;
    }
    
    return 0;
}
