#include "database.h"
#include "account.h"
#include<iostream>
using namespace std;

database::database() {

}

 bool database::find(account one, int pin) {
	 if (pin = one.id_num) {

		 cout << one.acc_num << endl;
		 
		 return true;
	 }
	 else {
		 return false;
	 }
}