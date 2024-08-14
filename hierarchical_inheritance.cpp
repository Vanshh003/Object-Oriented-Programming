#include <bits/stdc++.h>
using namespace std;

class human {
protected:
	string name;
	int age,;

public:
	human() {};  // default constructor created
	
	human(string name, int age) {
		this->name = name;
		this->age = age;
	}

	void display() {
		cout << name << " " << age << endl;
	}

	void work() {
		cout << "im working" << endl;
	}
};


class student: public human {
	int roll_number, fees;

public:
	student(string name, int age, int roll_number, int fees): human(name, age) {
		this->roll_number = roll_number;
		this->fees = fees;
	}

	void display() {
		cout << name << endl;
		cout << age << endl;
		cout << roll_number << endl;
		cout << fees << endl;
	}
};

class teacher: public human {
	int salary;

public:
	teacher(int salary, string name, int age) {
		this->salary = salary;
		this->name = name;
		this->age = age;
	}

	void display() {
		cout << name << " " << age << " " << salary << endl;
	}
};

int main() {
	student a1("Vansh", 21, 1498, 820000);
	a1.display(); 

	teacher a2(99, "mohit", 23);
	a2.display();
}