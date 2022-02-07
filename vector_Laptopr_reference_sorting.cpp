#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 


class Laptop
{
    int srno;
    char make[20];
    float cost;
public:
    void accept();
    void display();
    float getCost();
};

 

float Laptop::getCost()
{
    return cost;
}

 

void Laptop::accept()
{
    cout<<"Enter laptop details"<<endl;
    cin>>srno>>make>>cost;
}

 

void Laptop::display()
{
    cout<<srno<<"   "<<make<<"    "<<cost<<endl;
}

 

int compare(Laptop l1, Laptop l2)
{
    return l1.getCost()<l2.getCost();
}

 

int main()
{
    vector<Laptop> v1;
    
    Laptop laptop;
    laptop.accept();
    v1.push_back(laptop);
    
    laptop.accept();
    v1.push_back(laptop);
    
    laptop.accept();
    v1.push_back(laptop);
    
    laptop.accept();
    v1.push_back(laptop);
    
    laptop.accept();
    v1.push_back(laptop);
    
    vector<Laptop>::iterator itr;
    for(itr=v1.begin(); itr!=v1.end(); itr++)
        (*itr).display();
        
    sort(v1.begin(),v1.end(),compare);
    cout<<endl<<endl<<endl;
    
    for(itr=v1.begin(); itr!=v1.end(); itr++)
        (*itr).display();
    
    cout<<endl;
    return 0;
}
