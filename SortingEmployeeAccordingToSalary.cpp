#include<iostream>
#include<cstring>
using namespace std;

 

class Employee
{
    int empid;
    char name[20];
    double salary;
public:
    Employee();
    Employee(int, char*, double);
    void accept();
    void display();
    bool operator>(Employee e);
};

 

bool Employee::operator>(Employee e)
{
    return salary>e.salary;
}

 

Employee::Employee()
{
    empid=1001;
    strcpy(name,"abc");
    salary=10000;
}

 

Employee::Employee(int id, char *n, double s)
{
    empid=id;
    strcpy(name,n);
    salary=s;
}

 


void Employee::accept()
{
    cout<<"Enter employee info"<<endl;
    cin>>empid>>name>>salary;
}

 

void Employee::display()
{
    cout<<empid<<"  "<<name<<"  "<<salary<<endl;
}

 


template<typename T>
void SelectionSort(T *arr, int n)
{
    int i, j;
    T temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])    //e1 > e2   e1.operator>(e2)
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

 

int main()
{
    int n=5, i;
    Employee emp[5];
    
    for(i=0;i<n;i++)
    {
        emp[i].accept();
    }
    
    SelectionSort(emp, n);
    
    for(i=0;i<n;i++)
    {
        emp[i].display();
    }
    
    cout<<endl;    
    return 0;
}

 

 

 

 

 

 

 

 

 


 
