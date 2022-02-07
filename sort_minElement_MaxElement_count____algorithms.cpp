#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

 

class Laptop
{
    int srno;
    char make[20];
    float cost;
public:
    Laptop();
    Laptop(int, char*, float);
    void display();
    float getCost();
    bool operator==(Laptop);  //l1==l2 l1.operator==(l2)
};

 

bool Laptop::operator==(Laptop l)
{
    
    return srno==l.srno && !strcmp(make,l.make) && cost==l.cost;
}

 

Laptop::Laptop()
{
}

 

Laptop::Laptop(int sn, char *m, float c)
{
    srno=sn;
    strcpy(make,m);
    cost=c;
}

 

void Laptop::display()
{
    cout<<srno<<"   "<<make<<"    "<<cost<<endl;
}

 

float Laptop::getCost()
{
    return cost;
}
    

 

int fun(Laptop l1, Laptop l2)
{
    return l1.getCost()<l2.getCost();
}

 

int main()
{
    vector<int> v1;
    v1.push_back(12);
    v1.push_back(6);
    v1.push_back(6);
    v1.push_back(6);
    v1.push_back(6);
    v1.push_back(18);
    v1.push_back(1);
    v1.push_back(10);
    
    for(int i=0; i<v1.size(); i++)
        cout<<v1[i]<<"  ";
        
    //sort(v1.begin(),v1.end());
    //vector<int>::iterator maxitr=max_element(v1.begin(), v1.end());
    //cout<<"\nmaximum interger is "<<*maxitr<<endl;
    
    int cnt=count(v1.begin(), v1.end(),6);
    cout<<"\nNumber of times 6 is appearing inside vector-"<<cnt<<endl;
    
        
    cout<<endl;    
    vector<Laptop> v2;
    v2.push_back(Laptop(1,"dell",40000));
    v2.push_back(Laptop(2,"hp",30000));
    v2.push_back(Laptop(3,"apple",20000));
    v2.push_back(Laptop(3,"apple",20000));
    v2.push_back(Laptop(3,"apple",20000));
    v2.push_back(Laptop(4,"acer",10000));
    
    cout<<endl;
    for(int i=0; i<v2.size(); i++)
        v2[i].display();
        
    cout<<endl;
    //sort(v2.begin(),v2.end(), fun);
    //cout<<"Laptop with maimum cost-"<<endl;
    //(*max_element(v2.begin(), v2.end(),fun)).display();
    
    int cnt1=count(v2.begin(), v2.end(),Laptop(3,"apple",20000));
    cout<<"\nNumber of times \"apple\" is appearing inside vector-"<<cnt1<<endl;

 

    return 0;
}
