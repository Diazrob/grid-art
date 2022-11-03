#include < iostream>  // cin, cout, endl
using namespace std;

int main() {
	char grid[8][8];
	int aNumber = 0;
	int bitVal = 125;

	// clear the grid

	for (int row = 0; row < 8; row++) {
		for (int col = 0; col < 8; col++) {
			grid[row][col] = ' '; //should be a space
		}
	}

	// 8 times
	for (int getNum = 0; getNum < 8; getNum++) {
		// read a number
		cin >> aNumber;
		// convert it to a row of characters
		// store the chards in the grid
		bitVal = 128;
		for (int bit = 0; bit < 8; bit++) {
			if ((aNumber / bitVal) == 0) 
				grid[getNum][bit] = ' ';
			else 
				grid[getNum][bit] = '*';
				aNumber %= bitVal;
				bitVal /= 2;
		}
	}
	// print the grid
	for (int row = 0; row < 8; row++) {
		for (int col = 0; col < 8; col++) {
			cout << grid[row][col];
		}
		cout << endl;
	}

	return 0;
}