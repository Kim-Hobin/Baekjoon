#include <iostream>
#include <algorithm>

#define endl "\n"
#define MAX 1000 + 1
using namespace std;

int N, sum;
int seq[MAX];
int cache[MAX];
int r_cache[MAX];

void cal() {
	//증가하는 부분 수열
	for (int i = 1; i <= N; i++) {
		cache[i] = 1;
		for (int j = 1; j <= i; j++) {
			if (seq[i] > seq[j])
				cache[i] = max(cache[i], cache[j] + 1);
		}
	}

	//감소하는 부분 수열
	for (int i = N; i >= 1; i--) {
		r_cache[i] = 1;
		for (int j = N; j >= i; j--) {
			if (seq[i] > seq[j]) 
				r_cache[i] = max(r_cache[i], r_cache[j] + 1);
		}
	}

	for (int i = 1; i <= N; i++) {
		sum= max(sum, abs(cache[i] + r_cache[i] -1));
	}
}

int main() {
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> seq[i];
	}
	
	cal();

	cout << sum << endl;

	return 0;
}