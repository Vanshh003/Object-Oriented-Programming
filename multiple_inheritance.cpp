#include <bits/stdc++.h>
using namespace std;

class engineer {
	void money() {
		cout << "hello money";
	}

public:
	string specilization;

	void work() {
		cout << "i specialise in: " << specilization;
	}
};

class youtuber {
public:
	int subscribers;

	void contentCreater() {
		cout << "i have a subscriber base of: " << subscribers;
	}
};


class codeTeacher: public engineer, public youtuber {
public:
	string name;

	codeTeacher(string name, string specilization, int subscribers) {
		this->name = name;
		this->specilization = specilization;
		this->subscribers = subscribers;
	}

	void showCase() {
		cout << "name: " << name << endl;
		
		work();
		contentCreater();
	}
};


int main() {
	codeTeacher a1("vansh", "cse", 10);
	a1.showCase(); // output as expected
	a1.work();	// works fine as work() is public
	a1.contentCreater(); // works fine as contentCreator() is public

	// a1.money(); // error as money() is private and hence not inherited
}