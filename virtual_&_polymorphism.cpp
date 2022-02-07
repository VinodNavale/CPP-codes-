/*
   Virtual function - A member function declared with keyword virtual

   Pure virtual function - It is a virtual function initialized to 0 and do not have any definition associated with it.
	
   Abract class - It is a class with at least one pure virtual function. ( We cannot instantiate the abstract class/cannot create object)
   		   
   Pure Abstract class - It is an astract class with all functions declared as pure virtual.
   
   We cannot have virtual constructors but we can declare destructors virtual.
*/

#include<iostream>
using namespace std;

class Polygon //abstract class
{
	public:
		virtual double calcArea()=0;   //pure virtual function
		virtual double calcPeri()=0;
};

class Circle : public Polygon
{
	int radius;
public:
	Circle(int=0);
	double calcArea();
	double calcPeri();
};

Circle::Circle(int r)
{
	radius=r;
}

double Circle::calcArea()
{
	return 3.142*radius*radius;
}

double Circle::calcPeri()
{
	return 2*3.142*radius;
}

class Rectangle:public Polygon
{
	int length;
	int breadth;
public:
	Rectangle(int=0, int=0);
	double calcArea();
	double calcPeri();
};

Rectangle::Rectangle(int l, int b)
{
	length=l;
	breadth=b;
}

double Rectangle::calcArea()
{
	return length*breadth;
}

double Rectangle::calcPeri()
{
	return 2*(length+breadth);
}

class Square:public Rectangle
{
public:
	Square(int=0);
	double calcArea();
	double calcPeri();
};

Square::Square(int s):Rectangle(s,s)					
{
}

double Square::calcArea()
{
	return Rectangle::calcArea();
}

double Square::calcPeri()
{
	return Rectangle::calcPeri();
}

int main()
{
	Circle c1;
	Polygon *ptr;  //Generic Pointer 
	
	ptr=&c1;
	
	ptr->calcArea();
	ptr->calcPeri();
	
	return 0;
}
























