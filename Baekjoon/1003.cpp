#include <iostream>
using namespace std;

pair<int, int> cache[41];
pair<int, int> cnt;

template <typename T>
pair<T, T> plusPair(pair<T, T> A, pair<T, T> B) {
	return { (A.first + B.first), (A.second + B.second) };
}

pair<int, int> fibo(int N) { //N번쨰 피보나치 수
	if (N == 0) {
		return {1, 0};
	}
	if (N == 1) {
		return {0, 1};
	}
	if (cache[N].first && cache[N].second) {
		return cache[N];
	}
	else {
		return cache[N] = plusPair(fibo(N - 2), fibo(N - 1));
	}
}

int main() {
	int T; cin >> T;

	while (T--) {
		int n; cin >> n;
		cnt.first = 0;
		cnt.second = 0;

		cnt =fibo(n);

		cout << cnt.first << ' ' << cnt.second << endl;
	}
	
	return 0;
}