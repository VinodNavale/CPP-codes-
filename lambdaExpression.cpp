#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 

void fun(int i)
{
    cout<<i<<"  ";
}

 


int main()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(2);
    v1.push_back(30);
    v1.push_back(1);
    v1.push_back(50);
    
    for_each(v1.begin(), v1.end(), fun);
    cout<<endl;
    
    for_each(v1.begin(), v1.end(), [](int i){        //lambda expressions
        cout<<i<<"  ";
    });
    cout<<endl;
    
    sort(v1.begin(), v1.end(), [](int a, int b){
        return a<b;
    });
    
    
    for_each(v1.begin(), v1.end(), [](int i){        
        cout<<i<<"  ";
    });
    cout<<endl;
    
    
    cout<<*min_element(v1.begin(), v1.end(),[](int a, int b){
        return a<b;
    })<<endl;
    
    
    cout<<*max_element(v1.begin(), v1.end(), [](int a, int b){
        return a<b;
    })<<endl;
    

 

    return 0;
}

 

 

 

 

 

 

 

 


 
