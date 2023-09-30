#include <iostream>
using namespace std;

int main() {
	int asterisks, i;

	cout << "Enter number of asterisks per side: ";
	cin >> asterisks;

		//top right side of triangle
		for (int a = 0; a < 2*asterisks-1; a++) {
			for (int c = 0; c < 2 * asterisks - 1; c++) {
				if (a < asterisks) {
					if (c<asterisks - (a + 1) || c>asterisks + (a - 1))
						cout << " ";
					else
						cout << "*";
				}
				else {
					if (c > (a - asterisks) && c < ((2 * asterisks - 1) - (a - asterisks) - 1)) 
						cout << "*";					
					else
						cout << " ";
				}
			}
			cout << "\n";
		}

	return 0;
}