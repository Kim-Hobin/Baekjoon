#include <iostream>

using namespace std;

const int MAX = 1000000 + 1;
const int DIV = 15746;
int cache[MAX];

int F(int n) {
	if (n == 1 || n == 2) {
		return n;
	}
	if (cache[n]) {
		return cache[n];
	}
	return cache[n] = (F(n - 1) + F(n - 2)) % DIV;
}

int main() {
	int N; cin >> N;

	cout << F(N);

	return 0;
}