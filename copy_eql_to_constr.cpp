#include<iostream>
#include<cstring>
using namespace std;
		
/*
	Copy Constructor -
			1. It is used to create an object as a copy of already existing object
			2. Compiler provides copy constructor which performs shallow copy.
			3. If a class contains pointer data member then, it is mandatory for programmer to provide -
	     			    destructor to avoid memory leakage
				    copy constructor to avoid dangling pointer situation.
		        4. The argument to the copy constructor must be passed by reference to avoid stack overflow.(infinite recursion)
				    
*/

class Laptop
{
	int srno;
	char *make; 
	double cost;
public:
	Laptop();
	Laptop(int, const char*, double);
	void display();
	Laptop(Laptop&);
	~Laptop(); 
	Laptop& operator=(Laptop&); 				
};

Laptop& Laptop::operator=(Laptop &l)
{
	if(this==&l)
	{
		return *this;
	}
	else
	{
		srno=l.srno;
		make=new char[strlen(l.make)+1];
		strcpy(make,l.make);
		cost=l.cost;
		return *this;  		//syntax to return function invoking object
	}
}

int main()
{
	Laptop l1;
	Laptop l2(103,"Apple",100000);
	
	Laptop l3,l4;
	l3=l2;			//l3.operator=(l2)
	l4=l3=l2;		//l4.operator=(l3.operator=(l2))
	l4.display();		
	l3.display();
	

	l2=l2;  		//l2.operator=(l2)
	l2.display();
	
	return 0;
}


Laptop::~Laptop()
{
	//cout<<"Destructor"<<endl;
	delete make;
}

Laptop::Laptop()
{
	srno=100;
	make=new char[5];
	strcpy(make,"Dell");
	cost=50000;
}

Laptop::Laptop(int sn, const char *m, double c)
{
	srno=sn;
	make=new char[strlen(m)+1];
	strcpy(make,m);
	cost=c;
}

void Laptop::display()
{
	cout<<srno<<"\t"<<make<<"\t"<<cost<<endl;
}

Laptop::Laptop(Laptop &l)   //Laptop l3(l2)
{
	srno=l.srno;
	make=new char[strlen(l.make)+1];
	strcpy(make, l.make);
	cost=l.cost;
}






