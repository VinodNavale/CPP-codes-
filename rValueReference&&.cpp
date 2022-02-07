#include<iostream>
using namespace std;


void Swap(int &rx, int &ry)
{
    int temp;
    temp=rx;
    rx=ry;
    ry=temp;
}

 

void Swap(int &&rx, int &&ry)
{
    int temp;
    temp=rx;
    rx=ry;
    ry=temp;
    cout<<rx<<"  "<<ry<<endl;
}

 

int main()
{
    int x=10, y=20;
    
   // int &&rx=10;          
    
    Swap(x,y);
    cout<<x<<"   "<<y<<endl;
    
    Swap(10,20);
    
    return 0;
}

