#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

class Account
{
	int accno;
	char* name;
	double balance;
public:
	Account();
	Account(int,const char*,double);
	void display();
	void Add();
	void Deposite(double);
	double withdraw();
	//~Account();
};
/*Account::~Account()
{
	delete name;
}*/
Account::Account()
{	
	accno=1;
    	name=new char[6];
    	strcpy(name,"Name");
    	balance=2000;
}
Account::Account(int a,const char* n,double b)
{
	accno=a;
	name=new char[strlen(n)+1];
	strcpy(name,n);
    	balance=b;
}

void Account::display()
{
    cout<<accno<<"   "<<name<<"    "<<balance<<endl;
}
void Account::Add(){
	cout<<"Enter Account no:\t";
	cin>>accno;
	cout<<"Enter Customer name:\t";
	cin>>name;
	cout<<"Enter Account balance:\t";
	cin>>balance;
}
int main()
{
	vector<Account> v;	
	Account a;
	int user;
	//user=new char[10];
	cout<<"Would you like to sign in as..."<<endl;
	cout<<"1.Admin"<<endl;
	cout<<"2.Customer"<<endl;
	cin>>user;
	switch (user) {
	
  		case 1:
  			char ch;
  			int choice;
  			cout<<"Do u want to continue...1.yes/2.no"<<endl;
  			cin>>choice;
			do{
  			cout<<"Which operation would u like to perform.."<<endl;
			cout<<"a.Add Customer"<<endl;
			cout<<"b.Search Customer"<<endl;
			cout<<"c.Balance Enquiry "<<endl;
			cout<<"d.Delete Customer"<<endl;
			cout<<"e.Display all Customers"<<endl;
			cin>>ch;
			
			
			switch(ch){
			case 'a':
   			//v.push_back(Account(1234,"Vivekanand",15000));
   			a.Add();
   			v.push_back(a);
   			
   			break;
   			case 'b':
        		break;
        		case 'c':
        		break;
        		case 'd':
        		break;
        		case 'e':
        		cout<<"Account Details of all Customers\t"<<endl;
        		for(int i=0; i<v.size(); i++)
        		v[i].display();
        		break;
        		default: cout<<"Please enter correct choice"<<endl;
        		}
        		}while(choice!=2);	 	
   			break;
		case 2:
			
			
		
		break;
		default:
			cout<<"Enter Valid User"<<endl;
}
	return 0;
}
