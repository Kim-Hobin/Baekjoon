#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) { // 1, 2, 3, ...
		for (int j = N; j > i; j--) {
			cout << ' ';
		}
		for (int k = 1; k <= i; k++) {
			cout << '*';
			cout << ' ';
		}
		cout << endl;
	}

	return 0;
}