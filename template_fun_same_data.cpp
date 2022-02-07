#include<iostream>
using namespace std;
                            //Template Function
template<typename T>
void Swap(T &a,  T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}

 

int main()
{
    int x=10, y=20;
    Swap(x,y);
    cout<<x<<"   "<<y<<endl;
    
    const char *s="KPIT", *d="Technologic";
    Swap(s,d);
    cout<<s<<"   "<<d<<endl;
    
    return 0;
}                  
