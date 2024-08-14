#include <bits/stdc++.h>
using namespace std;

class human {
  public:
	string name;

	void display() {
		cout << "my name is " << name << endl;
	}	
};


class engineer : public virtual human {
	void money() {
		cout << "hello money";
	}

   public:
	string specilization;

	void work() {
		cout << "i specialise in: " << specilization;
	}
};


class youtuber : public virtual human { 
  public:
	int subscribers;

	void contentCreater() {
		cout << "i have a subscriber base of: " << subscribers;
	}
};


class codeTeacher: public engineer, public youtuber {
  public:
	int salary;

	codeTeacher() {}; // made a default constructor
	
	codeTeacher(string name, string specilization, int subscribers, int salary) {
		this->name = name;
		this->specilization = specilization;
		this->subscribers = subscribers;
		this->salary = salary;
	}
};



int main() {
	codeTeacher a1;
	a1.display();
}