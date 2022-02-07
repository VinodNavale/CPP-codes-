#include<iostream>
#include<set>
using namespace std;

 

/*
    set - It is a collection of unique and sorted elements.
    multiset - It is a collection of sorted elements.
*/

 

int main()
{    
    multiset<int> s;
    s.insert(12);
    s.insert(10);
    s.insert(5);
    s.insert(124);
    s.insert(124);
    s.insert(124);
    s.insert(124);
    s.insert(1);
    
    set<int>::iterator itr;
    for(itr=s.begin(); itr!=s.end(); itr++)
        cout<<*itr<<"  ";
    cout<<endl;
    
    
    return 0;
}
