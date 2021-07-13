#include <iostream>

using namespace std;

int main() {
	int num[8], odd = 0, min = 101;
	for (int i = 1; i <= 7; i++) {
		cin >> num[i];
		if (num[i] % 2 == 1) {
			odd += num[i];

			if (min > num[i]) {
				min = num[i];
			}
		}
	}

	if (!odd) {
		cout << -1 << endl;
	}
	else {
		cout << odd << endl << min << endl;
	}

	return 0;
}