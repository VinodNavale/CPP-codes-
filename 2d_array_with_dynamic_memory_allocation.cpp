#include<iostream>
using namespace std;

int main()
{
    int **p, m, n, i, j;
    cout<<"Enter number of rows and columns"<<endl;
    cin>>m>>n;
    p=new int*[m];
    for(i=0;i<m; i++)
    {
        p[i]=new int[n];
    }
    cout<<"Enter array elements"<<endl;
    for(i=0; i<m; i++)
    {
        for(j=0;j<n; j++)
        {
            cin>>p[i][j];
        }
    }
    cout<<"Array-"<<endl;
    for(i=0; i<m; i++)
    {
        for(j=0;j<n; j++)
        {
            cout<<p[i][j]<<"  ";
        }
        cout<<endl;
    }
    for(i=0; i<m; i++)
    {
        delete []p[i];
    }
    delete []p;
    return 0;
}
