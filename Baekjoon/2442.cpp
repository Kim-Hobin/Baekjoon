#include <iostream>

using namespace std;

int main() {
	int N = 0;
	cin >> N;

	for (int i = 1; i <= N; i++) { // 1, 2, 3, 4, ...
		for (int j = N; j > i; j--) {
			cout << ' ';
		}
		for (int k = 1; k < i * 2; k++) { // 1, 3, 5, 7, ...
			cout << '*';
		}
		cout << endl;
	}

	return 0;
}