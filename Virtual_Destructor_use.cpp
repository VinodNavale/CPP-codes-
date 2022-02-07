#include<iostream>
using namespace std;

//virtual destructors are used to avoid memory leakage

class A
{
	int *a;
public:
	A();
	virtual ~A();
};

A::A()
{
	a=new int;
}

A::~A()
{
	delete a;
}

class B:public A
{
	int *b;
public:
	B();
	~B();
};

B::B()
{
	b=new int;
}

B::~B()
{
	delete b;
}

int main()
{
	A *ptr=new B;
	delete ptr;
	return 0;
}

