#include<iostream>
#include<map>
using namespace std;

 

    //map - It is a collection of unique and sorted elements where an element is a pair of key and value.
    //multimap - It is a collection of sorted elements where an element is a pair of key and value.

 

int main()
{
    map<int, char*> m;
    m.insert(pair<int, char*>(101,"Tejal"));
    m.insert(make_pair<int, char*>(102,"Atul"));  //m[102]="Atul"
    m[103]="Raja";
    
    map<int, char*>::iterator itr;
    for(itr=m.begin(); itr!=m.end(); itr++)
        cout<<(*itr).first<<"  "<<(*itr).second<<endl;
    
    return 0;
}
