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
	Complex operator+(Complex &);	
	Complex operator-();
	Complex operator++();
	Complex operator++(int);
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

Complex Complex::operator+(Complex &c)
{
	Complex temp;
	temp.real=real + c.real;
	temp.img=img + c.img;
	return temp;
}

Complex Complex::operator-()
{
	Complex temp;
	temp.real=-real;
	temp.img=-img;
	return temp;
}

Complex Complex::operator++()
{
	Complex temp;
	temp.real=++real;
	temp.img=++img;
	return temp;
}


Complex Complex::operator++(int i)  // i is a dummy argument
{
	Complex temp;
	temp.real=real++;  
	temp.img=img++;
	return temp;
}

int main()
{
	Complex c1(12,24);
	Complex c2(10,20);
	
	Complex c3, c4;
	c3=c1+c2;  //c3=c1.operator+(c2) 	
	c3.display(); //22+44i
	
	
	c4=-c1; //c4=c1.operator-()
	c4.display(); //-12-24i
	
	Complex c5, c6;
	c6=++c1;   //c6=c2.operator++()
	c6.display();  //13+25i
	c1.display(); //13+25i
	
	c5=c2++;   //c5=c2.operator++(int)
	c5.display(); //10+20i
	c2.display();  //11+21i
		
	return 0;
}

/*
	We cannot overload ==>  .(Dot),  ::(scope resolution),  sizeof,  ?:(ternary), typeid
*/















