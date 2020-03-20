#include "interaction.h"
#include<iostream>
using namespace std;



interaction::interaction() {

}

bool interaction::running() {
	return true;
}

bool interaction::not_running() {
	return false;
}



void interaction::display_balance(account id) {
	cout << id.balance << endl;
}

bool interaction::logout(char answer) {
	return true;
}

bool interaction::terminate(char answer) {
	return true;
}

bool interaction::display() {

	while (running() == true) {
		
		cout << "[R]egistration" << endl;
		cout << "[B]alance" << endl;
		cout << "[T]ransfer" << endl;
		cout << "[L]ogout" << endl;
		cout << "[E]xit" << endl;
		return true;
		
	}

	
	
}
 