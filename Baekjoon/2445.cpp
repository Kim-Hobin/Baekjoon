#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) { // 1, 2, 3, ...
		for (int j = 1; j <= i; j++) {
			cout << '*';
		}
		for (int k = N * 2; k > i * 2; k--) {
			cout << ' ';
		}
		for (int l = 1; l <= i; l++) {
			cout << '*';
		}
		cout << endl;
	}
	for (int i = 1; i <= N - 1; i++) {
		for (int j = N; j > i; j--) {
			cout << '*';
		}
		for (int k = 0; k < i * 2; k++) {
			cout << ' ';
		}
		for (int l = N; l > i; l--) {
			cout << '*';
		}
		cout << endl;
	}

	return 0;
}