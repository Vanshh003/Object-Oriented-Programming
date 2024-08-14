#include <bits/stdc++.h>
using namespace std;

class human {
protected:
	string name;
	int age, weight;

public:
	human(string name, int age) {
		this->name = name;
		this->age = age;
	}

	void work() {
		cout << "im working" << endl;
	}
	
	void display() {
		cout << name << " " << age;
	}
};


class student: public human {
	int roll_number, fees;

public:
	// calling the constructor of parent class
	student(string name, int age, int roll_number, int fees): human(name, age) {
		this->roll_number = roll_number;
		this->fees = fees;
	}
	
	void didsplay() {
		cout << name << " " << age << " " << roll_number << " " << fees;
	}
};

int main() {
	student a1("Vansh", 21, 1498, 820000);
	a1.display(); // as a1 is object of student class it will print name age rno fees
								// agar student me display nahi hota tb vo parent ke display ke paas jata
}