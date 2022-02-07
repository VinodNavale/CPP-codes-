#include<iostream>
#include<cstdlib>
using namespace std;

 

class Complex 
{
    int real;
    int img;
public:
    Complex();        
    Complex(int, int);        
    void display();
    friend void operator<<(ostream &cout, Complex &c);
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

 

void operator<<(ostream &cout, Complex &c)
{
    cout<<c.real<<"+"<<c.img<<"i"<<endl;
}

 

int main()
{
    Complex c1(12,24);
    Complex c2(10,20);
    
    cout<<c1;  //operator<<(cout,c1)
    cout<<c2;
        
    return 0;
}

 

// friend functions are used for overloading << and >> operators

 

 

 

 

 

 

 


 
