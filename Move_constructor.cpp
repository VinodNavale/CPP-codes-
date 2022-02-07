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
    Student(Student &&);        //move constructor
    ~Student();
    void display();
};

 

Student::Student()
{
    rollno=1;
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
    s1.display();
    
    Student s2(move(s1));
    s2.display();
    
    return 0;
}
