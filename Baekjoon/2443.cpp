#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) { // 0, 1, 2, 3, ...
		for (int j = 0; j < i; j++) {
			cout << ' ';
		}
		for (int k = N * 2 -1; k > i * 2; k--) {
			cout << '*';
		}
		cout << endl;
	}
	return 0;
}