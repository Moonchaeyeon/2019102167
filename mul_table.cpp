#include <iostream>
using namespace std;

int main() {
	for (int r = 1; r<9; r++) {
		for (int c = 1; c<10; c++)
			cout << r << " * " << c << " = " << r * c << endl;
		cout << endl;
	}

	return 0;
}