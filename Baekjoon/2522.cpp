#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) { // 1, 2, 3, ...
		for (int j = N - 1; j >= i; j--) {
			cout << ' ';
		}
		for (int k = 1; k <= i; k++) {
			cout << '*';
		}
		cout << endl;
	}

	for (int i = 1; i <= N - 1; i++) {
		for (int j = 1; j <= i; j++) {
			cout << ' ';
		}
		for (int k = N - 1; k >= i; k--) {
			cout << '*';
		}
		cout << endl;
	}

	return 0;
}