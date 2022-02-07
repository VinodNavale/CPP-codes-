#include<iostream>
#include<cstring>
using namespace std;

 

int main()
{
    int i,j,n=5;
    char *str[5];
    char temp[20], *t;
    

 

    for(i=0;i<5;i++)
    {
        cout<<"Enter name"<<endl;
        cin>>temp;
        str[i]=new char[strlen(temp)+1];
        strcpy(str[i],temp);
    }
    
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                t=str[i];
                str[i]=str[j];
                str[j]=t;
            }
        }
    }
    cout<<endl<<endl;
    for(i=0; i<5;i++)
        cout<<str[i]<<endl;
        
    for(i=0; i<5;i++)    
        delete str[i];
    
    return 0;
}
