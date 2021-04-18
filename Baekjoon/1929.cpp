#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int M, N; // M : ÃÖ¼Ú°ª, N : ÃÖ´ñ°ª
	cin >> M >> N;
	bool* prime;
	prime = new bool[N + 1];

	for (int i = 2; i < N + 1; i++) {
		prime[i] = true;
	}
	
	for (int i = 2; i <= sqrt(N); i++) {
		if (prime[i] == true) {
			for (int j = i * 2; j <= N; j = j + i) {
				prime[j] = false;
			}
		}
	}

	for (int i = M; i <= N; i++) {
		if (prime[i]) {
			cout << i << '\n';
		}
	}

	return 0;
}