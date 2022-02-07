#include<iostream>
#include<vector>
#include<list>
using namespace std;

 

/*
                    vector                        list
                    
            It is dynamically growing array        It is maintained as doubly linked list internally
            so, elements are stored sequentially        so, elements are stored descretely
            
            Insertion and removal of element         We can insert or remove element inside list
            is possible only from rear end        from both rear and front end.
            
            It is random acccess container.        We cannot access any random element using
            we can access any intermediate element    subscript notation
            by using subscript notation v[i]
*/

 

int main()
{
    vector<int> v;
    
    v.push_back(12);
    v.push_back(24);
    v.push_back(10);
    v.push_back(5);
    v.pop_back();
    
    
    vector<int>::iterator it;
    
    for(it=v.begin(); it!=v.end(); it++)
        cout<<*it<<"   ";
    cout<<endl;

 

    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<"   ";            

 

    cout<<endl;
    list<int> l;
    
    l.push_back(12);
    l.push_back(24);
    l.push_back(10);
    l.push_back(5);
    l.push_front(100);
    l.push_front(200);
    l.push_front(300);
    l.pop_back();
    l.pop_front();
    
    list<int>::iterator itr;
    
    for(itr=l.begin(); itr!=l.end(); itr++)
        cout<<*itr<<"   ";
        
    cout<<endl;
    return 0;
}
