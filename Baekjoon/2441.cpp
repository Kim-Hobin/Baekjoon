#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) { // 0, 1, 2, 3, 4
		for (int j = 0; j < i; j++) {
			cout << ' ';
		}
		for (int k = N; k > i; k--) {
			cout << '*';
		}
		cout << endl;
	}

	return 0;
}