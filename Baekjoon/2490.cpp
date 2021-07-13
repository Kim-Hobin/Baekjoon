#include <iostream>

using namespace std;

int main() {
	int T = 3;
	bool yut;
	int sum;
	
	while (T--) {
		sum = 0;

		for (int i = 1; i <= 4; i++) {
			cin >> yut;
			sum += yut;
		}

		if (sum == 1) {
			cout << "C" << endl;
		}
		else if (sum == 2) {
			cout << "B" << endl;
		}
		else if (sum == 3) {
			cout << "A" << endl;
		}
		else if (sum == 4) {
			cout << "E" << endl;
		}
		else if (sum == 0) {
			cout << "D" << endl;
		}
	}
	
	return 0;
}