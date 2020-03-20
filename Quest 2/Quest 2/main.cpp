#include<iostream>
#include "account.h"
#include "database.h"
#include "interaction.h"

using namespace std;



int main() {

	
	char userInput;
	float ammount;
	account A;
	account B;

	interaction program;
	while (program.display() == true) {

		cout << "Enter Option Here: ";
		cin >> userInput;
		switch (userInput) {

		case 'R':
			cout << "Account 'A' Registered." << endl;
			A.acc_num = 1;
			cout << "Input Pin Number: ";
			cin >> A.id_num;
			cout << "Account Number: " << A.acc_num << endl;
			
			break;

		case 'r':
			cout << "Account 'A' Registered." << endl;
			A.acc_num = 1;
			cout << "Input Pin Number: ";
			cin >> A.id_num;
			cout << "Account Number: " << A.acc_num << endl;
			
			break;

		case 'B':
			cout << "Account 'A' Balance: " << A.balance << endl;

			break;

		case 'b':
			cout << "Account 'A' Balance: " << A.balance << endl;

			break;

		case 'T':
			cout << "How much money should go into Account 'B'?: ";
			cin >> ammount;
			transfer(A, B, ammount);
			break;

		case 't':
			cout << "How much money should go into Account 'B'?: ";
			cin >> ammount;
			transfer(A, B, ammount);
			break;

		case 'L':
			cout << "Restarting ATM..." << endl;
			program.display();
			break;

		case 'l':
			cout << "Restarting ATM..." << endl;
			program.display();
			break;

		case 'E':
			return false;
			break;

		case 'e':
			return false;
			break;

		}
	}
	

	/* All test where accomplished using balance, id_num, and
	acc_num (members of the account class) as public variables,
	rather than private variables */

	/*Testing pay_in and pay_out
	account coop;

	coop.pay_in(20.56);

	cout << coop.balance << endl;

	coop.pay_out(20.00);

	cout << coop.balance; */

	/*Testing transfer

	account coop;

	coop.pay_in(20.56);

	cout << coop.balance << endl;

	account gaige;

	gaige.pay_in(30.00);

	cout << gaige.balance << endl;

	transfer(coop, gaige, 20.00);

	cout << coop.balance << endl;

	*/

	/*Testing find

	database info;

	account coop;

	coop.acc_num = 10;
	coop.id_num = 2;

	info.find(coop, 2);

	*/

	return 0;
}