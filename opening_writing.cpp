#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int main() {
	vector<int> arr(5);

	cout << "enter the input: ";
	for(int i=0; i<5; i++) cin >> arr[i];	


	ofstream fout;
	fout.open("zero.txt");

	for(int i=0; i<5; i++) {
		fout << arr[i] << " "; 	// data ko file ke andr daaldo with apt spacing
	}

	fout.close();
}

// input: {1, 2, 3, 4, 5}
// output: 1 2 3 4 5