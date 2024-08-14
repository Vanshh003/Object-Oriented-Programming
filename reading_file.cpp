#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream fin;

  // first open the file and then read it
	fin.open("zoom.txt"); 

  // read the file
	char c;
	c = fin.get();
	
	while(!fin.eof()) {  
		cout << c;
		c = fin.get();	// move to the next char
	}

	fin.close();
}

// op:
//		hello india