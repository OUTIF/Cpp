#include <iostream>
#include <string>
#include <ctime>
#include "Bank.h"
#include <cstdlib>

using namespace std;

int const id = 152120;
string const name = "yusuf";

int main() {
	Bank yusuf(name, id);
	int on = true;
	while (on) {
		int input;

		cout << "Welcome to the yBANK\n";
		cout << "press 0 to get all account details.\n";
		cout << "press 1 to check balance\n";
		cout << "press 2 to withrdow mony of your account \n";
		cout << "press 3 to deposit money into your account\n";
		cin >> input;
		if (!isdigit(input) && (input > 3 || input < 0)) {
			cout << "invalid input please try again";
		}
		else {
			switch (input) {
			case 0:

				yusuf.info(id);
				break;
			case 1:
				cout<<"your balance is:"<<yusuf.balance(name, id)<<"$ \n";
				break;
			case 2:
				int wamount;
				cout << "please enter the amount you want to withdrow:";
				cin >> wamount;
				yusuf.withdraw(name, id, wamount);
				break;
			case 3:
				int damount;
				cout << "please enter the amount you want to deposit:";
				cin >> damount;
				yusuf.deposit(name, id, damount);
				break;
			default:
				cout << "error";
				break;
				
			}
		}



	}



	



	return 0;
}
