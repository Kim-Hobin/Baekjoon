#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int n, cnt, n2; // 베르트랑 공준 : n보다 크고 2n보다 작거나 같은 소수 적어도 하나 존재

	bool prime[246913];

	while (1) {
		cin >> n;
		if (n == 0) break;
		n2 = n * 2;
		cnt = 0;

		for (int i = 2; i <= n2; i++) {
			prime[i] = true;
		}

		for (int i = 2; i <= sqrt(n2); i++) {
			if (prime[i] == true) {
				for (int j = i + i; j <= n2; j += i) {
					if (prime[j]) {
						prime[j] = false;
					}
				}
			}
		}
		
		for (int i = n + 1; i <= n2; i++) {
			if (prime[i]) {
				cnt++;
			}
		}

		cout << cnt << '\n';
	}
	return 0;
}