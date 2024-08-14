#include <bits/stdc++.h>
using namespace std;

class InvalidAmountError : public runtime_error{
	public:
		InvalidAmountError(const string &msg) : runtime_error(msg){};
};

class InsufficientBalanceError : public runtime_error{
	public: 
		InsufficientBalanceError(const string &msg) : runtime_error(msg){};
};

class customer {
	string name;
	int balance, account_number;

  public:
  	customer(string nme, int balance, int account_number) {
  		this->name = name;
  		this->balance = balance;
  		this->account_number = account_number;
  	}

  	void deposit(int amount) {
  		if(amount > 0) {
  			balance += amount;
  			cout << amount << " amount";
  		}
  		else throw InvalidAmountError("amt should be greater than 0");
  	}

  	void withdraw(int amount) {
  		if(balance >= amount && amount > 0) {
  			balance -= amount;
  			cout << amount << "withdrawn";
  		}
  		else if(amount < 0) throw InvalidAmountError("amt less than 0");
  		else throw InsufficientBalanceError("low balance");
  	}
};

int main() {
	customer c1("abc", 5000, 10);
	
	try {
		c1.deposit(100);
		c1.withdraw(6000);
	}
	catch(const InvalidAmountError &e) {     
		cout << "exception occured: " << e.what() << endl;
	}
	catch(const InsufficientBalanceError &e) {
		cout << "exception occured: " << e.what() << endl;
	} 
	catch(...) {
		cout << "exception occured" << endl;
	}
	
}