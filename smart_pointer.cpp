#include<iostream>
using namespace std;

 

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

 

class SmartPointer
{
    Complex *cptr;
public:
    SmartPointer();
    SmartPointer(int, int);
    ~SmartPointer();
    Complex* operator->();
};

 

Complex* SmartPointer::operator->()
{
    return cptr;
}

 

SmartPointer::SmartPointer()
{
    cptr=new Complex();
}

 

SmartPointer::SmartPointer(int a, int b)
{
    cptr=new Complex(a, b);
}

 

SmartPointer::~SmartPointer()
{
    delete cptr;
}

 

 

int main()
{
    
    SmartPointer sm1(10,20);    
    sm1->display();        //sm1.operator->()
    
    
    return 0;
}
