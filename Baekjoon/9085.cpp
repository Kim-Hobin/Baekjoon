#include <iostream>

using namespace std;

int main() {
	int T, N, num, sum;
	cin >> T;
	
	while (T--) {
		cin >> N;
		sum = 0;

		for (int i = 1; i <= N; i++) {
			cin >> num;
			sum += num;
		}

		cout << sum << endl;
	}

	return 0;
}