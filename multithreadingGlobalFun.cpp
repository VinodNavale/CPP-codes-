#include<iostream>
#include<thread>
using namespace std;

 

void fun()
{
    for(int i=0; i<100; i++)
        cout<<"Hi"<<endl;
}

 

void foo()
{
    for(int i=0; i<100; i++)
        cout<<"Hello"<<endl;
}

 

int main()
{
    thread t1(fun);
    thread t2(foo);
    
    t1.join();
    t2.join();
    return 0;
}    
