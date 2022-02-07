#include<iostream>
using namespace std;
template<class T>

void Swap(T &a,  T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}

 

template<class T, class U>
U add(T a, U b)
{
    return a+b;
}

int main()
{
	cout<<add(100,5.6)<<endl;
    
    return 0;
}
