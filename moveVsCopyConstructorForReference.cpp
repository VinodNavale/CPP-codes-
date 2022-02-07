#include<iostream>
#include<cstring>
using namespace std;

 

class Student
{
    int rollno;
    char *name;
public:
    Student();
    Student(int, const char*);
    Student(Student&);        //copy constructor
    Student(Student&&);        //move constructor
    void operator=(Student&);    //Copy assignment operator
    void operator=(Student&&);     //move assignemnt operator
    ~Student();
    void display();
};

 

Student::Student()
{
    rollno=1;
    name=new char[4];
    strcpy(name,"abc");
}

 

Student::Student(int r, const char *n)
{
    rollno=r;
    name=new char[strlen(n)+1];
    strcpy(name,n);
}

 

Student::Student(Student &s)
{
    rollno=s.rollno;
    name=new char[strlen(s.name)+1];
    strcpy(name,s.name);
    cout<<"copy constructor"<<endl;
}

 

Student::Student(Student &&s)
{
    rollno=s.rollno;
    name=s.name;
    s.name=NULL;    
    cout<<"move constructor"<<endl;
}

 

void Student::operator=(Student &s)    //copy assignment operator
{
    rollno=s.rollno;
    name=new char[strlen(s.name)+1];
    strcpy(name,s.name);
    cout<<"copy assignment operator"<<endl;
}

 

void Student::operator=(Student &&s)  //move assignment operator
{
    rollno=s.rollno;
    name=s.name;
    s.name=NULL;
    cout<<"move assignment operator"<<endl;
}

 

Student::~Student()
{
    delete name;
}

 

void Student::display()
{
    cout<<rollno<<"    "<<name<<endl;
}

 

int main()
{
    Student s1(101,"Akash");
    Student s2(102,"Jay");
    
    Student temp;
    
    temp=move(s1);
    s1=move(s2);
    s2=move(temp);
    
    s1.display();
    s2.display();
    
    return 0;
}
