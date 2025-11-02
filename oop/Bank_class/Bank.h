#include <string>
#include <cstdlib>
#include <ctime>
#include <time.h>

using namespace std;



class Bank {
private :
	string NameOfHolder;
	int HolderId;
	double Balance;
	int AccountId;

	int rANDOMid() {
		int randomnumber = rand() % 1000;
		return randomnumber;
	}

public:
	Bank(string name, int id, double balance = 0.0) {
		srand(time(0));

		this->HolderId = id;
		this->NameOfHolder = name;
		this->Balance = balance;
		this->AccountId=rANDOMid();
	}

	void info(int id) {
		if (id == this->HolderId) {
			cout << "name of account holder :" << this->NameOfHolder << endl;
			cout << "id of account holder :" << this->HolderId << endl;
			cout << "Balance of account  :" << this->Balance << endl;
			cout << "account id of account  :" << this->AccountId << endl<<endl;
		}
		else cout << "Your id of name is wrong please try again.\n";
	}
	
	double balance(string name, int id) {
		if (id == this->HolderId && name == this->NameOfHolder)return this->Balance;
		else cout << "Your id of name is wrong please try again.\n";
	}
	
	void deposit(string name, int id,double amount) {
		if (name == this->NameOfHolder && id == this->HolderId) {
			this->Balance += amount;
			cout << "you have deposit this much money into your bank account:"<<amount<<endl;
		}
		else cout<< "Your id of name is wrong please try again.\n";
	}

	void withdraw(string name, int id, double amount) {
		if (name == this->NameOfHolder && id == this->HolderId) {
			if (amount < this->Balance) {
				cout << "You have withdraw this ammount of money:" << amount<<endl;
				this->Balance -= amount;
			}
			else cout << "There is no enough money in your bank account.\n";

		}
		else cout << "Your id of name is wrong please try again.\n";
	}

};
