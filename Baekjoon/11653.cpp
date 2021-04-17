#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N;
	cin >> N;
	bool is_prime = true;
	
	for (int i = 2; i <= sqrt(N); i++) { // 72 : 2, 3, 4, 5, 6, 7, 8
		while (N % i == 0) {
			N /= i;
			cout << i << endl;
		}
	}

	if (N != 1) cout << N << endl;
	return 0;
}