#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i; j++) {
			cout << ' ';
		}
		for (int k = N * 2 -1; k > i * 2; k--) {
			cout << '*';
		}
		cout << endl;
	}
	for (int i = 0; i < N - 1; i++) { // 0, 1, 2, ...
		for (int j = N - 2; j > i; j--) {
			cout << ' ';
		}
		for (int k = 1; k < (i + 2) * 2; k++) {
			cout << '*';
		}
		cout << endl;
	}

	return 0;
}