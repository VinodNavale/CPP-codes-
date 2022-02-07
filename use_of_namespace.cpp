#include<iostream>
using namespace std;

 

namespace space1
{
    int i;
    
    void fun()
    {
        cout<<"space1-fun"<<endl;
    }
};

 

namespace space2
{
    int i;
    
    void fun()
    {
        cout<<"space2-fun"<<endl;
    }
};

 

int main()
{
    using namespace space2;
    fun();
    fun();
    space1::fun();
    fun();    
    
    cout<<"inside main"<<endl;    
    return 0;
}
