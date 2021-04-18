#include <iostream>
using namespace std;


int main() {

	// 2, 3, 5, 7, 11
	int T;
	cin >> T;

	bool prime[10002];
	for (int i = 0; i < T; i++) {
		int n;
		cin >> n;

		for (int i = 2; i <= n; i++) {
			prime[i] = true;
		}

		for (int i = 2; i <= n; i++) {
			if (prime[i]) {
				for (int j = i * i; j <= n; j += i) { // 4, 6, 8, ..., 6, 9, 12, 15,
					if (prime[j]) {
						prime[j] = false;
					}

				}
			}
		}

		for (int i = n / 2; i <= n; i++) {
			if (prime[n - i] == true && prime[i] == true) {
				cout << n - i << ' ' << i << endl;
				break;
			}
		}
	}
	
	return 0;
}