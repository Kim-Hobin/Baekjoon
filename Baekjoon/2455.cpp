#include <iostream>

using namespace std;

int main() {
	int in, out, rem = 0, max = 0;

	for (int i = 1; i <= 4; i++) {
		cin >> out >> in;
		rem += in - out;
		if (max < rem) {
			max = rem;
		}
	}

	cout << max << endl;

	return 0;
}