#include<iostream>
#include<thread>
using namespace std;

 

void fun(int n)
{
    for(int i=0; i<n; i++)
        cout<<"Hi"<<endl;
}

 

void foo(int n)
{
    for(int i=0; i<n; i++)
        cout<<"Hello"<<endl;
}

 

int main()
{
    int n;
    cout<<"How many times to display message"<<endl;
    cin>>n;

 

    thread t1(fun,n);
    thread t2(foo,n);
    
    t1.join();
    t2.join();
    return 0;
}    
