

 /*  Write a class "Customer" with attributes for -

 

                Customer Id (integer e.g. 1001)
                Customer Name (character pointer e.g. "Sachin")
                Customer Location (character poiner e.g. "Pune")
                Cusomer Wallet Balance (double e.g. 50000)
                
Implement below functions in class "Customer" -

 

                Default Constructor
                Parameterized Constructor
                Destructor
                Copy Constructor
                Function to accept customer information
                Function to display customer information
                
In function main - 
                Create few objects of class Customer. Accept and display information for them.

 


Above code should not have any memory leakage. */



#include<iostream>
#include<cstring>
using namespace std;

class Customer
{
    int cust_ID;
    char *cust_name; 
    char *cust_loc;
    double cust_bal;
public:
    Customer();
    Customer(int, const char*,const char*, double);
    void accept();
    void display();
    ~Customer();
    Customer(Customer &);                  
};

Customer::~Customer()
 {
    cout<<"Destructor1"<<endl;
    delete cust_name;
    delete cust_loc;
 }

Customer::Customer()
 {
    cust_ID=10;
    cust_name=new char[10];
    strcpy(cust_name,"kailas");
    cust_loc=new char[20];
    strcpy(cust_loc,"Pune");
    cust_bal=10000;
  }

Customer::Customer(int id, const char *nm, const char *lo, double c)
{
    cust_ID=id;
    cust_name=new char[strlen(nm)+1];
    strcpy(cust_name,nm);
    cust_loc=new char[strlen(lo)+1];
    strcpy(cust_loc,lo);
    cust_bal=10000;
}

 void Customer::accept()
 {
     cout<<"Enter customer info"<<endl;
     cin>>cust_ID>>cust_name>>cust_loc>>cust_bal;
  }
  
void Customer::display()
{
    cout<<cust_ID<<"\t"<<cust_name<<"\t"<<cust_loc<<"\t"<<cust_bal<<endl;
}

 Customer::Customer(Customer &k)
 {
   cust_ID=k.cust_ID;
   cust_name=new char[strlen(k.cust_name)+1];
   strcpy(cust_name,k.cust_name);
   cust_loc=new char[strlen(k.cust_loc)+1];
   strcpy(cust_loc,k.cust_loc);
   cust_bal=k.cust_bal;
   }
   
int main()
{
    Customer k1;
    k1.accept();
    k1.display();
    Customer k2(106,"Amit","Pune",100000);
    k2.display();
    Customer k3(k2);
    k3.display();
    
    return 0;
}


