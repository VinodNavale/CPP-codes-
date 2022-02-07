#include<iostream>
#include<vector>
using namespace std;

 

int fun()
{
    return 5;
}

 

class A
{
    int a,b;
public:
    A()=default;
    
    A(int x, int y)
    {
        a=x;
        b=y;
    }
    
    A(A &)=delete;
    
};

 

int main()
{
     int i=10;
     auto x=1.234;
     cout<<x<<endl;

 

    auto y=fun();                    //automatic type deduction
    cout<<y<<endl;
    
    vector<int> v{1,2,3,4,5};
    
    vector<int>::iterator itr=v.begin();
    auto it=v.begin();                //automatic type deduction
    for(;it!=v.end();it++)
        cout<<*it<<"   ";
        
    
    //uniform initialization syntax
    int a{10};
    int arr[5]{5,4,3,2,1};
    int *p=new int[3]{6,7,8};
    vector<int> v1{1,2,3,4,5};
    A obj{10,20};    
    
    A obj_a;
    //A obj_b(obj_a);
    
    
    int *ptr=nullptr;
         
    return 0;
}

 

/*
    Below six functions are provided by the compiler and they can be declared as defaulted
        a. Default Constructor
        b. Destructor
        c. Copy Constructor
        d. Copy assignment Operator
        e. Move Constructor
        f. Move Assignment Operator
*/
