#include "Account.h"
#include <vector>

using namespace std;

class Customer {
public:
	vector<Account> accounts;

private:
	string customerID;
	string customerName;
	string customerAddress;
	string customerPhone;
	string customerEmail;

public:
	Customer();
	Customer(string userName);

	int getNoOfAccounts();
	string getCustomerID();
	string getCustomerName();
	string getCustomerAddress();
	string getCustomerEmail();
	string getCustomerPhone();

	void setCustomerName(string name);
	void setCustomerAddress(string address);
	void setCustomerEmail(string email);
	void setCustomerPhone(string phone);
	void setCustomerAccount(Account newAccount);

	void saveCustomerInfo(string file);
	void loadCustomerInfo(string file);
};