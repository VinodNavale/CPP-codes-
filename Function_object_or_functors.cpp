#include<iostream>
using namespace std;
class Test
{
public:
    void operator()()
    {
        cout<<"function objects"<<endl;
    }
};

 

int main()
{
    Test t1;
    t1();        //t1.operator()()
    return 0;
}
