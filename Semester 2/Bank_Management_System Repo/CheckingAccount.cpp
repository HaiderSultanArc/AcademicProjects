#include "CheckingAccount.h"
#include <iostream>
#include <sstream>

using namespace std;

ostringstream message;

CheckingAccount::CheckingAccount() {}

double CheckingAccount::withdraw(double withdrawAmmount) {
	if (withdrawAmmount > this -> balance) {
		this->creditlimit = withdrawAmmount - this->balance;
		this->balance = 0;

		message << "Your Loan is: " << this->creditlimit << '\n';
		message << "Your Balance is: " << this->balance << "\n";
	}
	else if (withdrawAmmount <= this->balance) {
		this->balance -= withdrawAmmount;
		
		message << "Your Remaining Balance is: " << this->balance << "\n";
	}

	return withdrawAmmount;
}

double CheckingAccount::deposit(double depositAmmount) {
	this->balance += depositAmmount;

	message << "Your Balance is: " << this->balance << "\n";

	return depositAmmount;
}