#include <bits/stdc++.h>
using namespace std;

class student {
public:
	void print() {
		cout << "student\n";
	}
};

class male {
public:
	void malePrint() {
		cout << "im male\n";
	}
};

class female {
public:
	void femalePrint() {
		cout << "im female\n";
	}
};

class boy: public student, public male {
public:
	void boyPrint() {
		cout << "im boy\n";
	}
};

class girl: public student, public female {
public:
	void girlPrint() {
		cout << "im girl\n";
	}
};


int main() {
	girl g1;
	g1.girlPrint();	// output: im girl
	g1.print(); // output: student

	boy b1;
	b1.malePrint(); // output: im male
}