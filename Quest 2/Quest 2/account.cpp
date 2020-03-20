#include "account.h"


account::account() {
	balance = 0;
	
}

bool transfer(account& one, account& two, float ammount) {

	if (!one.pay_in(ammount)) {
		return false;
	}
	if (!two.pay_out(ammount)) {
		return false;
	}
	else {
		return true;
	}
		
	
}

bool account::pay_in(float deposit) {

	balance += deposit;
	if (deposit > 0) {
		return true;
	}
	else {
		return false;
	}
}

bool account::pay_out(float withdraw) {

	balance -= withdraw;

	if (withdraw > 0) {
		return true;
	}
	else {
		return false;
	}
}

