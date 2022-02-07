#include<iostream>
#include<vector>   //for vector class 
#include<algorithm> //for sort function
using namespace std;

 


int main()
{

 

    vector<int> v1;
    
    v1.push_back(12);
    v1.push_back(24);
    v1.push_back(35);
    v1.push_back(10);
    v1.push_back(5);
    
    vector<int>::iterator itr;
    
    for(itr=v1.begin(); itr!=v1.end(); itr++)
    {
        cout<<*itr<<"   ";
    }
    cout<<endl;
    sort(v1.begin(), v1.end());
    
    for(itr=v1.begin(); itr!=v1.end(); itr++)
    {
        cout<<*itr<<"   ";
    }
    cout<<endl;
    return 0;
}
