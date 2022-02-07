#include<iostream>
#include<cmath>
using namespace std;

class Complex
{
    int real;
    int img;
public:
    int getReal();
    int getImg();
    void setReal(int);
    void setImg(int);
    Complex();            //Default
    Complex(int, int);        //Parameterized
    void accept();
    void display();
};

 


int Complex::getImg()
{
    return img;
}

 

int Complex::getReal()
{
    return real;
}

 

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

 


void Complex::accept()   //:: scope resolution
{
    cout<<"Enter real and imaginary parts of complex number"<<endl;
    cin>>real>>img;
}

 

void Complex::display()
{
    char ch='+';
    if(img<0)
        ch='-';
    cout<<real<<ch<<abs(img)<<"i"<<endl;
}

 

void Complex::setReal(int r)
{
    real=r;
}

 

void Complex::setImg(int i)
{
    img=i;
}

 

int main()
{
    Complex c1, c2,c3(5,10);
    c1.display();
    c2.display();
    c3.display();
    
    cout<<c3.getReal()<<endl;
    cout<<c3.getImg()<<endl;

 

    c3.display(); //5+10i    
    c3.setReal(25);
    c3.display(); //25+10i
    
    
    c3.setImg(100);
    c3.display(); //25+100i
    
    return 0;
}
