#include <iostream>

using namespace std;

const int MAX = 10001;

int N, cnt[MAX] = { 0, };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N;

	int tmp;
	for (int i = 1; i <= N; i++) {
		cin >> tmp;
		cnt[tmp]++;
	}

	for (int i = 1; i <= MAX - 1; i++) {
		if (cnt[i] != 0) {
			for (int j = 1; j <= cnt[i]; j++) {
				cout << i << '\n';
			}
		}
	}

	return 0;
}