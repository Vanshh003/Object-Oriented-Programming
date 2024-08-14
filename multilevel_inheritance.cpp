#include <bits/stdc++.h>
using namespace std;

class person {
protected:
	string name;

public:
	void introduce() {
		cout << "my name is: " << name << endl;
	}
};


class employee: public person {
protected:
	int salary;

public:
	void monthly_salary() {
		cout << "salary is: " << salary << endl;
	}
};


class manager: public employee {
public:
	string department;

	manager(string name, int salary, string department) {
		this->name = name;
		this->salary = salary;
		this->department = department;
	}

	void work() {
		cout << "department is: " << department;
	}
};


int main() {
	manager a1("Vansh", 10,  "it");
	a1.work(); // output: department is: it
	a1.monthly_salary(); // output: salary: 10
	a1.introduce(); // output: my name is: vansh


	// from here a1.department can be directly accessed as it is public
	// but a1.salary cannot be accessed as it is a private member
}