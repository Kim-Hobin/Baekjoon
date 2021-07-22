#include <iostream>

using namespace std;

int MAX = 10;

int main() {
	int out, in, total = 0, max = 0;
	for (int i = 1; i <= 10; i++) {
		cin >> out >> in;
		total += -out + in;
		if (total > max) {
			max = total;
		}
	}

	cout << max << endl;

	return 0;
}