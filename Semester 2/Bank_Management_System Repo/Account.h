#pragma once
#include <string>
#include <fstream>
#include <tuple>
#include <vector>

using namespace std;
using namespace System::Collections::Generic;

struct Date {
	int day;
	int month;
	int year;
};

struct Loan {
	double ammount;
	Date endingDate;
};

class Account {
protected:
	string accountNo;
	string accountType;
	Loan loan;
	double balance;

public:
	Account();
	Account(string type);

	virtual double deposit(double depositAmmount);
	virtual double withdraw(double withdrowAmmount);

	tuple<vector<string>, vector<string>, vector<string>> balanceEquiry();

	string getAccountNo();
	string getAccountType();
	double getRemainingLoan();
	Date getLoanDuration();
	double getBalance();

	void setAccountType(string accountType);
	void setLoan(double ammount, int endingDay, int endingMonth, int endingYear);

	void saveAccount(ofstream& file);
	void loadAccount(ifstream& file);
};