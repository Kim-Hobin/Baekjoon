#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int x[4] = { 0, };
	int y[4] = { 0, };

	for (int i = 0; i < 3; i++) {
		cin >> x[i] >> y[i];
	}

	if (x[0] == x[1]) {
		cout << x[2] << " ";
	}
	else if (x[1] == x[2]) {
		cout << x[0] << " ";
	}
	else {
		cout << x[1] << " ";
	}

	if (y[0] == y[1]) {
		cout << y[2] << endl;
	}
	else if (y[1] == y[2]) {
		cout << y[0] << endl;
	}
	else {
		cout << y[1] << " ";
	}

	return 0;
}