#include <iostream>

using namespace std;
using LL = long long;

LL cache[101];

LL P(int N) {
	if (N == 1 || N == 2 || N == 3) {
		return 1;
	}
	if (cache[N]) {
		return cache[N];
	}
	return cache[N] = P(N - 2) + P(N - 3);
}

int main() {
	int T; cin >> T;

	while (T--) {
		int N; cin >> N;
		cout << P(N) << endl;
	}
	
	return 0;
}