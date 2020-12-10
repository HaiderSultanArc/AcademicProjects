#include "Customer.h"
//#include <cstdlib>
#include <random>
#include <ctime>

using namespace std;
//using namespace System;
//using namespace System::Windows::Forms;

Customer::Customer() {}

Customer::Customer(string userName) {
	for (int i = 0; i < 9; i++) {
		random_device rd;
		mt19937 mt(rd());
		uniform_real_distribution<double> dist(1, 10);

		int customerIDDigit = dist(mt);

		this->customerID += to_string(customerIDDigit);
	}
	
	/*srand(time(0));

	for (int i = 0; i < 9; i++) {
		this->customerID += to_string(1 + (rand() % 9));
	}*/

	ofstream customerFile, customerRegistry;

	customerFile.open("Customers/" + this->customerID + ".txt");

	customerRegistry.open("customerSignIn.txt", ios_base::app);
	customerRegistry << userName << "," << this->customerID << "\n";

	customerFile.close();
	customerRegistry.close();
}

/*GETTER FUNCTIONS*/

string Customer::getCustomerID() {
	return this->customerID;
}

string Customer::getCustomerName() {
	return this->customerName;
}

string Customer::getCustomerEmail() {
	return this->customerEmail;
}

string Customer::getCustomerPhone() {
	return this->customerPhone;
}

string Customer::getCustomerAddress() {
	return this->customerAddress;
}

int Customer::getNoOfAccounts() {
	return this->accounts.size();
}

/*SETTER FUNCTIONS*/

void Customer::setCustomerName(string name) {
	this->customerName = name;
}

void Customer::setCustomerEmail(string email) {
	this->customerEmail = email;
}

void Customer::setCustomerPhone(string phone) {
	this->customerPhone = phone;
}

void Customer::setCustomerAddress(string address) {
	this->customerAddress = address;
}

void Customer::setCustomerAccount(Account newAccount) {
	this->accounts.push_back(newAccount);
}

void Customer::saveCustomerInfo(string file) {
	ofstream customerFile;
	ofstream allCustomerAccounts;

	customerFile.open("Customers/" + file + ".txt");
	allCustomerAccounts.open("Customers/AC" + file + ".txt");

	MessageBox::Show(gcnew String("Number of Accounts: " + this->getNoOfAccounts().ToString()));

	for (int account = 0; account < this->getNoOfAccounts(); account++) {
		customerFile << this->customerID << ',' << this->customerName << ',' << this->customerEmail << ',' << this->customerAddress << ',' << this->customerPhone;
		this->accounts[account].saveAccount(customerFile);

		allCustomerAccounts << this->accounts[account].getAccountNo() << ",";
		allCustomerAccounts << this->accounts[account].getAccountType() << ",";
		allCustomerAccounts << this->getCustomerID() << "\n";
	}

	customerFile.close();
	allCustomerAccounts.close();
}

void Customer::loadCustomerInfo(string file) {
	ifstream customerFile;

	customerFile.open("Customers/" + file + ".txt");

	getline(customerFile, this->customerID, ',');
	//MessageBox::Show(gcnew String(this->customerID.c_str()));

	getline(customerFile, this->customerName, ',');
	//MessageBox::Show(gcnew String(this->customerName.c_str()));

	getline(customerFile, this->customerEmail, ',');
	//MessageBox::Show(gcnew String(this->customerEmail.c_str()));

	getline(customerFile, this->customerAddress, ',');
	//MessageBox::Show(gcnew String(this->customerAddress.c_str()));

	getline(customerFile, this->customerPhone, ',');
	//MessageBox::Show(gcnew String(this->customerPhone.c_str()));

	int account = 0;

	while (!customerFile.eof()) {
		Account tempAcc;
		this->accounts.push_back(tempAcc);
		this->accounts[account].loadAccount(customerFile);

		char ch;
		customerFile >> ch;

		if (!((ch > 47 && ch < 58) || (ch > 64 && ch < 91) || (ch > 96 && ch < 122))) {
			customerFile.close();
			break;
			//MessageBox::Show(gcnew String(ch.ToString()));
		}

		account++;
	}
}