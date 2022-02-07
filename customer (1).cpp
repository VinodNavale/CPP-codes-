#include "customer.h"

// Default Constructor
Customer::Customer() {
	name = "";
	accountNumber = 0;
	accountBalance = 0;
}

// Parameterized Constructor
Customer::Customer(string s, double num, float bal) {
	name = s;
	accountNumber = num;
	accountBalance = bal;
}

//getters
string Customer::getName() {
	return name;
}

double Customer::getAccountNumber() {
	return accountNumber;
}

float Customer::getAccountBalance() {
	return accountBalance;
}

//setters
void Customer::setAccountBalance(float bal) {
	accountBalance = bal;
}

//Accept user details from user
void Customer::acceptDetails() {
	cout << "Enter user name : "<<endl;
	cin >> this->name;
	cout << "Enter user account number : "<<endl;
	cin >> this->accountNumber;
	cout << "Enter user account  opening balance : "<< endl;
	cin >> this->accountBalance;
}

//Display all users
void Customer::display() {
	cout << "Customer Name : " << getName() << endl;
	cout << "Account Number : " << getAccountNumber() << endl;
	cout << "Account Balance : " << getAccountBalance() << endl;
	cout << endl;

}
