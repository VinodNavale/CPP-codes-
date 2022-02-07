#include<iostream>
#include<cstring>
#include<set>
using namespace std;

 

//set stored the objects as constant objects. so they can call only constant member functions

 

class Laptop
{
    int srno;
    char make[20];
    float cost;
public:
    Laptop();
    Laptop(int, const char*, float);
    void display() const;
    bool operator<(Laptop) const;    // l1<l2  l1.operator<(l2)
};

 

bool Laptop::operator<(Laptop l) const
{
    return cost<l.cost;
}

 

Laptop::Laptop()
{
    srno=1;
    strcpy(make,"hp");
    cost=27000;
}

 

Laptop::Laptop(int sn, const char *m, float c)
{
    srno=sn;
    strcpy(make,m);
    cost=c;
}

 

void Laptop::display() const
{
    cout<<srno<<"   "<<make<<"    "<<cost<<endl;
}

 

int main()
{    
    set<Laptop> s;
    
    s.insert(Laptop(101,"Dell",50000));
    s.insert(Laptop(102,"HP",40000));
    s.insert(Laptop(103,"Lenovo",30000));
    s.insert(Laptop(104,"Apple",100000));
    s.insert(Laptop(105,"Acer",20000));
    
    set<Laptop>::iterator itr;
    for(itr=s.begin(); itr!=s.end(); itr++)
        (*itr).display();
    
    return 0;
}
