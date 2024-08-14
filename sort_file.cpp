#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int main() {
	vector<int> arr(5);

	cout << "enter the input: ";
	for(int i=0; i<5; i++) cin >> arr[i];	


	ofstream fout;
	fout.open("zero.txt");
	fout << "original data: \n";

	for(int i=0; i<5; i++) {
		fout << arr[i] << " "; 	// data ko file ke andr daaldo with apt spacing
	}

	fout << "\n sorted data: \n";
	sort(arr.begin(), arr.end());
	for(int i=0; i<5; i++) {
		fout << arr[i] << " "; 	
	}
}

// input: {4, 2, 3, 5, 1}
// output: 
//					 original data:
//					 4 2 3 5 1
//					 sorted data:
//					 1 2 3 4 5		