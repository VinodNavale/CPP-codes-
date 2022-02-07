#include<iostream>
using namespace std;

 


template<typename T>
class Stack
{
    int size;
    int top;
    T *arr;    
public:
    Stack();
    Stack(int);
    void push(T);
    T pop();
    bool isFull();
    bool isEmpty();
};

 

template<typename T>
Stack<T>::Stack()
{
    size=5;
    arr=new T[size];
    top=-1;
}

 

template<typename T>
Stack<T>::Stack(int s)
{
    size=s;
    arr=new T[size];
    top=-1;
}

 

template<typename T>
void Stack<T>::push(T d)
{
    if(!isFull())
        arr[++top]=d;
    else
        throw "stack is full!";
}

 

template<typename T>
T Stack<T>::pop()
{
    if(!isEmpty())
        return arr[top--];
    else
        throw "stack is empty!";
}

 

template<typename T>
bool Stack<T>::isFull()
{
    return top==size-1;
}

 

template<typename T>
bool Stack<T>::isEmpty()
{
    return top==-1;
}

 

 

int main()
{

 

    try{
        Stack<int> s1(5);    //instantiation of template class
        s1.push(10);
        s1.push(20);
        s1.push(30);
        s1.push(40);    
        s1.push(50);    
        //s1.push(60);
            
    
        cout<<s1.pop()<<endl;
        cout<<s1.pop()<<endl;
        cout<<s1.pop()<<endl;
        cout<<s1.pop()<<endl;
        cout<<s1.pop()<<endl;
    }
    catch(const char *s)
    {
        cout<<s<<endl;
    }
    
    
    try{
        Stack<const char*> s2;
        s2.push("KPIT");
        s2.push("Infy");
        s2.push("TCS");
        s2.push("Wipro");
        s2.push("Persistent");
        
        cout<<s2.pop()<<endl;
        cout<<s2.pop()<<endl;
        cout<<s2.pop()<<endl;
        cout<<s2.pop()<<endl;
        cout<<s2.pop()<<endl;
    }
    catch(const char *s)
    {
        cout<<s<<endl;
    }
}
