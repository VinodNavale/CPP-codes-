#include<iostream>
#include<cmath>
using namespace std;

 

/*
    Static -
        1. For static data member of a class only one copy exists which is shared by all the objects.
        2. Static data members has to be defined outside the class in .cpp file for their memory allocation
        3. Static member functions of a class can be called without object.
                    ClassName::FunctionName();
        4. Static member functions of a class can access only static data members.
*/

 

class Complex
{
    int real;
    int img;
    static int cnt;
public:
    Complex();        
    Complex(int, int);        
    void display();
    static void showCnt();
};

 

int Complex::cnt;  //definition of static member

 

void Complex::showCnt()
{
    cout<<"Number of objects-"<<cnt<<endl;
}

 

Complex::Complex()
{
    real=0;
    img=0;
    cnt++;
}

 

Complex::Complex(int r, int i)
{
    real=r;
    img=i;
    cnt++;
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
    Complex c1, c2;
    Complex c3(5,10), c4, c5(3,4), c6;

 

    Complex::showCnt();    
    return 0;
}
