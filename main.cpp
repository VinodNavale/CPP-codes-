#include <bits/stdc++.h>
#include <vector>
#include "customer.h"
using namespace std;

int main() {

	int choice;

	vector<Customer> v;
	cout << "Enter your choice 1: ADD USER	2:Search Customer by account number		3:Balance Enquiry	4:Display all		10:Exit "<< endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		Customer c;
		c.acceptDetails();
		v.push_back(c);
		cout << "User Added Successfully !!" << endl;

	case 4:cout << "All users are: ";
		for (int i = 0; i < v.size(); i++)
			cout << v[i].display() << " ";

	case 10:
		break;
	}
}
