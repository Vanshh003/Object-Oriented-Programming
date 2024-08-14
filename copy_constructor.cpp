#include <bits/stdc++.h>
using namespace std;

class  customer {
public:
	string name;
	int accountNumber;
	int balance;

	// default constructor
	customer () {
		this->name = "Vansh";
		this->accountNumber = 123;
		this->balance = 10000000;
	}

	// parameterised constructor
	customer(string name, int acc, int bal) {
		this->name = name;
		this->accountNumber = acc;
		this->balance = bal;
	}

	// constructor overloading
	customer(int acc, int bal) {
		this->accountNumber = acc;
		this->balance = bal;
	}

	// inline constructor
	inline customer(string a, int b, int c): name(a), accountNumber(b), balance(c) {
		
	}

	void display() {
		cout << this->name << endl;
		cout << this->accountNumber << endl;
		cout << this->balance << endl;
	}
};

int main() {
	customer a1;
	a1.display();

	cout << endl << endl;

	customer a2("vvv", 111, 1000);
	a2.display();
}
