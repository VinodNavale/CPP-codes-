#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;

 

class MobilePhone
{
    int modelno;
    char make[20];
    double cost;
public:
    int getModelNo();
    char* getMake();
    void accept();
    void display() const;    
    bool operator<(MobilePhone) const;    
};

 

int MobilePhone::getModelNo()
{
    return modelno;
}

 

char* MobilePhone::getMake()
{
    return make;
}

 

bool MobilePhone::operator<(MobilePhone m) const
{
    return cost<m.cost;
}

 

void MobilePhone::accept()
{
    cout<<"Enter mobile details"<<endl;
    cin>>modelno>>make>>cost;
}

 

void MobilePhone::display() const
{
    cout<<modelno<<"    "<<make<<"    "<<cost<<endl;
}

 

int main()
{
    vector<MobilePhone> v1;
    MobilePhone m;
    for(int i=0; i<5; i++)
    {
        m.accept();
        v1.push_back(m);
    }
    
    vector<MobilePhone>::iterator itr;
    for(itr=v1.begin(); itr!=v1.end(); itr++)
        (*itr).display();
        
    set<MobilePhone> s1;
        
    for(itr=v1.begin(); itr!=v1.end(); itr++)
        s1.insert(*itr);
    
    cout<<endl;
    
    set<MobilePhone>::iterator it;
    for(it=s1.begin(); it!=s1.end(); it++)
        (*it).display();
        
    map<int, char*> mp;
    for(itr=v1.begin(); itr!=v1.end(); itr++)
        mp.insert(pair<int, char*>((*itr).getModelNo(), (*itr).getMake()));
        
    cout<<endl;
    map<int, char*>::iterator mitr;
    for(mitr=mp.begin(); mitr!=mp.end(); mitr++)
        cout<<(*mitr).first<<"  "<<(*mitr).second<<endl;
    
    return 0;
}
