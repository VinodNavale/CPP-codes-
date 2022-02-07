#include<iostream>
using namespace std;

 

class Array
{
    int size;
    int *arr;
public:
    Array();
    Array(int);
    ~Array();
    
    Array(const Array  &);
    void Display();
    
    int& operator[](int);
};

int& Array::operator[](int index)
{
return arr[index];
}

void Array::Display()
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
}

 Array::Array(const Array& a)
 {
 	int i;
 	size=a.size;
 	arr=new int[size];
 	//copy(arr,a);
 	for(i=0;i<size;i++)
 	{
 		arr[i]=a.arr[i];
	 }
 	
 	
 }

Array::~Array()
{
    delete arr;
}

 

Array::Array()
{
    size=5;
    arr=new int[size];
    for(int i=0; i<size; i++)
        arr[i]=0;
}

 

Array::Array(int s)
{
    size=s;
    arr=new int[size];
    for(int i=0; i<size; i++)
        arr[i]=0;
}

 


int main()
{
    Array a1(9);
    
   // cout<<a1<<endl;
    Array a2(a1);
    a1.Display();
   cout<<"------------------------------------------------"<<endl;
   cout<<a1[2]<<endl;
   cout<<"------------------------------------------------"<<endl;
   a1[2]=100;
   cout<<a1[2]<<endl;
  // a2.Display();
    
    return 0;
}
