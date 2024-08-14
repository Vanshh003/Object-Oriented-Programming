#include <bits/stdc++.h>
using namespace std;

class customer {
	string name;
	int accNo, balance;
	
	// static data member
	static int total_customer;
	static int total_balance;

public:

	customer(string name, int accNo, int balance) {
		this->name = name;
		this->accNo = accNo;
		this->balance = balance;
		
		total_customer++;
		total_balance += balance;
	}
	
	// static member function
	static void disp_tot() {
		cout << "total customers: " << total_customer << endl;
		cout << "total balance: " << total_balance << endl;
	}

	// deposit
	void deposit(int amount) {
		if(amount > 0) {
			balance += amount;
			total_balance += amount;
		}
	}

	// withdraw
	void withdraw(int amount) {
		if(amount <= balance && amount > 0) {
			balance -= amount;
			total_balance -= amount;
		}
	}

	void display_total_cust() {
		cout << total_customer << endl;
	}
};

// initialising the static data members
int customer::total_customer = 0;
int customer::total_balance = 0;


int main() {
	customer a1("vansh", 1, 1000);
	customer a2("vansh2", 2, 2000);
	customer a3("vansh3", 3, 3000);

	// calling the function
	customer::disp_tot();    // output: 3    6000

	a1.deposit(800);
	customer::disp_tot();    // output: 3    6800

	a2.withdraw(500);
	customer::disp_tot();    // output: 3    6300
}