//rapping up of data and information into single unit while controlling access to them

#include <bits/stdc++.h>
using namespace std;

class customer {
	// data members kept private
	string name;
	int accNo, balance;

public:

	customer(string name, int accNo, int balance) {
		this->name = name;
		this->accNo = accNo;
		this->balance = balance;
	}

	// kept a check that only valid amounts are deposited and withdrawed
	// deposit
	void deposit(int amount) {
		if(amount > 0) {
			balance += amount;
		}
		else cout << "invalid amount" << endl;
	}

	// withdraw
	void withdraw(int amount) {
		if(amount <= balance && amount > 0) {
			balance -= amount;
		}
		else cout << "invalid amount" << endl;
	}

	void display() {
		cout << name << " " << accNo << " " << balance << " " << endl;
	}
};

int main() {
	customer a1("vansh", 1, 1000);
	customer a2("vansh2", 2, 2000);
	customer a3("vansh3", 3, 3000);

	a1.deposit(800);
	a1.display();    // vansh 1 1800

	a2.withdraw(2500);   // invalid amount
	a2.display();     // vansh2 2 2000
}