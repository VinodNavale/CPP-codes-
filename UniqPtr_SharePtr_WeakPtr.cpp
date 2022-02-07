#include<iostream>
#include<memory>
using namespace std;

 

/*
    SmartPointer Classes in C++11
            a. unique_ptr - we cannot assign one unique pointer to another unique pointer
            b. shared_ptr - we can share one shared pointer with other shared pointers and it will increment ref. count
            c. weak_ptr - if shared ptr is assigned to unique ptr it will not increment ref. count
*/

 

class Complex 
{
    int real;
    int img;
public:
    Complex();        
    Complex(int, int);        
    void display();
};

 

 
Complex::Complex()
{
    real=0;
    img=0;
}

 


Complex::Complex(int r, int i)
{
    real=r;
    img=i;
}

 


void Complex::display() 
{
    char ch='+';
    if(img<0)
        ch='-';
    cout<<real<<ch<<abs(img)<<"i"<<endl;
}

 

int main()
{
    unique_ptr<Complex> uptr1(new Complex(10,20));
    
    uptr1->display();
    
    unique_ptr<Complex> uptr2;
    
    //uptr2=uptr1;
    
    
    shared_ptr<Complex> sptr1(new Complex(10,20));
    
    uptr1->display();
    
    shared_ptr<Complex> sptr2;
    
    sptr2=sptr1;
    
    weak_ptr<Complex> wptr=sptr1;
    
    
    return 0;
}
