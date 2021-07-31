#include <iostream>
#include <algorithm>

using namespace std;

int tree[501][501];
int cache[501][501];
int n;

void maxVal(int cnt) { // 입력 : N, 출력 : 최대값
	cache[1][1] += tree[1][1];
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cache[i][j] += max(cache[i - 1][j - 1], cache[i - 1][j]) + tree[i][j];			
			cout << cache[i][j] << ' ';
		}
		cout << endl;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> tree[i][j];
		}
	}
	maxVal(n);

	return 0;
}