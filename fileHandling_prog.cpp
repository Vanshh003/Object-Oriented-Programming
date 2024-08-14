#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int main() {
	ofstream fout;
	fout.open("z1.txt");

	fout << "hello world\n";
	fout << "hello vansh\n";
	fout << "hello bhai\n";

	fout.close();


  // what i want is ki mai is file me ek bar me ek puri line read kru
	ifstream fin;
	fin.open("z1.txt");

	string line;
	while(getline(fin, line)) {		// z1.txt me puri line ko read kro and us line ko `line` me daaldo
		cout << line << endl;
	} 	// ye loop tb tk chlega jb tk file end nahi hojati

	fin.close();
}

// output: 
// 		hello world
// 		hello vansh
// 		hello bhai