#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

class Laptop
{
    int srno;
    char *make; 
    double cost;
public:
    Laptop();
    Laptop(int, const char*, double);
    void display();
    ~Laptop();    
	Laptop (Laptop &);           
};

Laptop::Laptop(Laptop &l)   //Laptop l3(l2)
{
    srno=l.srno;
    make=new char[strlen(l.make)+1];
    strcpy(make, l.make);
    cost=l.cost;
}
 


Laptop::~Laptop()
{
    cout<<"Destructor"<<endl;
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

 

int main()
{
  //  Laptop l1;
    Laptop l2(103,"Apple",100000);
    //l1.display();
  //  l2.display();
  Laptop l3(l2);
  l2.display();
  l3.display();
    
    return 0;
}
