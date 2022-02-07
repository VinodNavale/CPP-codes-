 //global function as a friend of a class
#include<iostream>
using namespace std;
 

class Test
{
    
    int i;
public:
    friend void fun();
    
};

 

void fun()
{
    Test t1;    
    t1.i=123;
}

 

int main()
{
    fun();
    return 0;
}
