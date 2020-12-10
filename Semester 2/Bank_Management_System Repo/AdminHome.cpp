#include "AdminHome.h"

using namespace SigninForm;

bool AdminHome::isValidName(String^ name) {
	string strName = marshal_as<string>(name);

	for (int ch = 0; ch < strName.length(); ch++) {
		if (!isalpha(strName[ch]) && strName[ch] != 32) {
			return false;
		}
	}

	return true;
}

bool AdminHome::isValidEmail(String^ email) {
	email = email->ToLower();
	if (email->Contains("@")) {
		if (email->EndsWith(".com")) {
			return true;
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}

bool AdminHome::isValidAccType(String^ accType) {
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

bool AdminHome::isValidPhone(String^ phone) {
	if (phone->Length == 13) {
		if (phone->StartsWith("+92")) {
			string strPhone = marshal_as<string>(phone);

			for (int ch = 1; ch < strPhone.length(); ch++) {
				if (!isdigit(strPhone[ch])) {
					return false;
				}
			}

			return true;
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}

bool AdminHome::isValidAmmount(String^ ammount) {
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