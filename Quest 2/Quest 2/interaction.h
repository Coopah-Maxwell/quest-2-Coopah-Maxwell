#pragma once
#include "account.h"


class interaction {
public:

	interaction();

	bool running();

	bool not_running();

	bool display();

	

	void display_balance(account);

	bool logout(char);

	bool terminate(char);

}; 
