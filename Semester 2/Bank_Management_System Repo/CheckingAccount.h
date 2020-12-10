#pragma once
#include "Account.h"

class CheckingAccount : public Account {
private:
	double creditlimit;

public:
	CheckingAccount();
	double withdraw(double withdrawAmmount) override;
	double deposit(double depositAmmount) override;
};

