#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int M, N, sum = 0, min = 10001;
	int input[100] = { 0, };
	cin >> M >> N;

	for (int n = 1; n <= sqrt(N); n++) {
		int n2 = n * n;
		if (n2 >= M) {
			sum += n2;

			if (min > n2) {
				min = n2;
			}
		}
	}
	
	if (sum == 0) {
		cout << -1 << endl;
	} else {
		cout << sum << endl;
		cout << min << endl;
	}

	return 0;
}