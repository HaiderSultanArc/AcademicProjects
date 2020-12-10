#include "Account.h"
#include <ctime>
//#include <cstdlib>
#include <random>
#include <iostream>

using namespace std;
//using namespace System;
//using namespace System::Windows::Forms;

Account::Account() {
	this->balance = 0;
}

Account::Account(string type) {
	this->balance = 0;

	for (int i = 0; i < 13; i++) {
		random_device rd;
		mt19937 mt(rd());
		uniform_real_distribution<double> dist(1, 10);

		int accNumberDigit = dist(mt);

		this->accountNo += to_string(accNumberDigit);
	}

	/*srand(time(0));

	for (int i = 0; i < 13; i++) {
		this->accountNo += to_string(1 + (rand() % 9));
	} */

	ofstream newAccount;

	newAccount.open("Accounts/" + this->accountNo + ".txt");
	newAccount.close();
}

double Account::deposit(double depositAmmount) {
	ofstream file;

	time_t sec = time(nullptr);
	tm* date = localtime(&sec);

	file.open("Accounts/" + this->accountNo + ".txt", ios_base::app);

	if (this->balance >= 0) {
		this->balance += depositAmmount;
		file << "Deposit: " << depositAmmount << "," << "Remaining Balance: " << this->balance << "," << date->tm_mday << '/' << date->tm_mon + 1 << '/' << date->tm_year + 1900 << "  " << date->tm_hour << ':' << date->tm_min << ':' << date->tm_sec << '\n';
	}
	else if (this->loan.ammount - depositAmmount > 0){
		this->loan.ammount -= depositAmmount;
		file << "Deposit: " << depositAmmount << "," << "Remaining Loan: " << this->loan.ammount << "," << date->tm_mday << '/' << date->tm_mon + 1 << '/' << date->tm_year + 1900 << "  " << date->tm_hour << ':' << date->tm_min << ':' << date->tm_sec << '\n';
	}
	else {
		this->balance += depositAmmount;
		file << "Deposit: " << depositAmmount << "," << "Remaining Balance: " << this->balance << "," << date->tm_mday << '/' << date->tm_mon + 1 << '/' << date->tm_year + 1900 << "  " << date->tm_hour << ':' << date->tm_min << ':' << date->tm_sec << '\n';
	}

	file.close();

	return depositAmmount;
}

double Account::withdraw(double withdrowAmmount) {
	this->balance -= withdrowAmmount;

	ofstream file;
	file.open("Accounts/" + this->accountNo + ".txt", ios_base::app);

	time_t sec = time(nullptr);
	tm* date = localtime(&sec);

	file << "Withdraw: " << withdrowAmmount << "," << "Remaining Balance: " << this->balance << "," << date->tm_mday << '/' << date->tm_mon + 1 << '/' << date->tm_year + 1900 << "  " << date->tm_hour << ':' << date->tm_min << ':' << date->tm_sec << '\n';

	file.close();
	return withdrowAmmount;
}

tuple<vector<string>, vector<string>, vector<string>> Account::balanceEquiry() {
	ifstream balanceEnquiry;

	balanceEnquiry.open("Accounts/" + this->accountNo + ".txt");

	vector<string> report[3];
	string event[192], remainingBalance[192], time[192];

	for (int line = 0; !balanceEnquiry.eof(); line++) {
		getline(balanceEnquiry, event[line], ',');
		getline(balanceEnquiry, remainingBalance[line], ',');
		getline(balanceEnquiry, time[line], '\n');

		report[0].push_back(event[line]);
		report[1].push_back(remainingBalance[line]);
		report[2].push_back(time[line]);
	}

	return make_tuple(move(report[0]), move(report[1]), move(report[2]));
}

/*GETTER FUNCTIONS*/

string Account::getAccountNo() {
	return this->accountNo;
}

string Account::getAccountType() {
	return this->accountType;
}

double Account::getBalance() {
	return this->balance;
}

double Account::getRemainingLoan() {
	return this->loan.ammount;
}

Date Account::getLoanDuration() {
	return this->loan.endingDate;
}

/*SETTER FUNCTIONS*/

void Account::setAccountType(string accountType) {
	this->accountType = accountType;
}

void Account::setLoan(double ammount, int endingDay, int endingMonth, int endingYear) {
	this->loan.ammount = ammount - this->balance;
	this->balance = -1 * loan.ammount;

	this->loan.endingDate.day = endingDay;
	this->loan.endingDate.month = endingMonth;
	this->loan.endingDate.year = endingYear;

	ofstream file;
	file.open("Accounts/" + this->accountNo + ".txt", ios_base::app);

	time_t sec = time(nullptr);
	tm* date = localtime(&sec);

	file << "Loan: " << ammount << "," << "Remaining Loan: " << this->loan.ammount << "," << date->tm_mday << '/' << date->tm_mon + 1 << '/' << date->tm_year + 1900 << "  " << date->tm_hour << ':' << date->tm_min << ':' << date->tm_sec << '\n';

	file.close();
}

void Account::saveAccount(ofstream& file) {
	if (this->balance < 0) {
		file << ",|" << this->accountNo << "," << this->accountType << "," << this->balance << "," << this->loan.endingDate.day << '/' << this->loan.endingDate.month << '/' << this->loan.endingDate.year << '\n';
	}
	else {
		file << ",|" << this->accountNo << "," << this->accountType << "," << this->balance << ',';
	}
}

void Account::loadAccount(ifstream& file) {
	string temp;

	getline(file, temp, '|');

	getline(file, this->accountNo, ',');
	//MessageBox::Show(gcnew String(this->accountNo.c_str()));

	getline(file, this->accountType, ',');
	//MessageBox::Show(gcnew String(this->accountType.c_str()));
	
	getline(file, temp, ',');
	//MessageBox::Show(gcnew String(temp.c_str()));
	this->balance = stod(temp);

	if (this->balance < 0) {
		this->loan.ammount = -1 * this->balance;

		getline(file, temp, '/');
		this->loan.endingDate.day = stoi(temp);

		getline(file, temp, '/');
		this->loan.endingDate.month = stoi(temp);

		getline(file, temp, '\n');
		this->loan.endingDate.year = stoi(temp);
	}
}