#pragma once


class account {
public:

	account();

	bool pay_in(float);

	bool pay_out(float);

	float balance;

	
	int acc_num;
	int id_num;
	
private:
	
};

bool transfer(account&, account&, float);