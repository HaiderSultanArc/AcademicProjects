#include "CustomerHome.h"
#include <ctime>

using namespace SigninForm;

bool CustomerHome::isValidAccNum(String^ accNum) {
	if (accNum->Length == 13) {
		string strAccNum = marshal_as<string>(accNum);

		for (int digit = 0; digit < strAccNum.length(); digit++) {
			if (!isdigit(strAccNum[digit])) {
				return false;
			}
		}

		return true;
	}
	else {
		return false;
	}
}

bool CustomerHome::isValidAccType(String^ accType) {
	accType = accType->ToLower();

	if (accType->Equals("loan")) {
		return true;
	}
	else if (accType->Equals("saving")) {
		return true;
	}
	else {
		return false;
	}
}

bool CustomerHome::isValidAmmount(String^ ammount) {
	if (ammount->Length <= 9) {
		string strAccNum = marshal_as<string>(ammount);

		for (int digit = 0; digit < strAccNum.length(); digit++) {
			if (!isdigit(strAccNum[digit])) {
				return false;
			}
		}

		return true;
	}
	else {
		return false;
	}
}

bool CustomerHome::isValidDate(int day, int month, int year) {
	int daysOfMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	time_t sec = time(NULL);
	tm* date = localtime(&sec);

	if (year < date->tm_year + 1900) {
		return false;
	}
	else if (((month > 12 || month < 1) || (day > daysOfMonth[month - 1])) && (year % 4 != 0)) {
		return false;
	}
	else if (month == 2) {
		if (day > 29) {
			return false;
		}
	}

	return true;
}