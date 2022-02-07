#include<iostream>
#include<cstring>
using namespace std;

class Vehicle_Policy
{
	int PolicyId;
	char Vehicle_Name[20];
	double Amount;
public:
	double getAmount();
	Vehicle_Policy();
	Vehicle_Policy(int, const char*, double);
	void accept();
	void display();
};

double Vehicle_Policy::getAmount()
{
	return Amount;
}

Vehicle_Policy::Vehicle_Policy()
{
}

Vehicle_Policy::Vehicle_Policy(int id, const char *vname, double amt)
{
	PolicyId=id;
	strcpy(Vehicle_Name,vname);
	Amount=amt;
}

void Vehicle_Policy::accept()
{
	cout<<"Enter info (Plicy Id / Vehicle Name / Policy Amount)"<<endl;
	cin>>PolicyId>>Vehicle_Name>>Amount;
}

void Vehicle_Policy::display()
{
	cout<<PolicyId<<"  "<<Vehicle_Name<<"   "<<Amount<<endl;
}

int main()
{
	int choice,cnt,i,j;
	Vehicle_Policy v1[10];
	Vehicle_Policy temp;
	
	cnt=0;
	while(true)
	{
		cout<<"1. Accept"<<endl;
		cout<<"2. Sort"<<endl;
		cout<<"3. Display"<<endl;
		cout<<"4. Exit"<<endl;
		cout<<"Please enter your choice"<<endl;
	
		cin>>choice;
	
		switch(choice)
		{
			case 1:
				v1[cnt++].accept();
				break;
			case 2:
				for(i=0; i<cnt-1; i++)
				{
					for(j=i+1; j<cnt; j++)
					{
						if(v1[i].getAmount()<v1[j].getAmount())
						{
							temp=v1[i];
							v1[i]=v1[j];
							v1[j]=temp;
						}
					}
				}
				break;
			case 3:
				for(i=0; i<cnt; i++)
				{
					v1[i].display();
				}
				break;
			case 4:
				exit(0);
		}
	}
	
	return 0;
}
















