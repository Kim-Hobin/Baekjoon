#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 1001;


int cost[MAX][4];
int cache[1001][4];

int F(int num) {
	for (int i = 1; i <= 3; i++) {
		cache[1][i] = cost[1][i];
	}
	for (int i = 2; i <= num; i++) {
		for (int j = 1; j <= 3; j++) {
			cache[i][j] = cost[i][j] + min(cache[i - 1][j % 3 + 1], cache[i - 1][(j + 1) % 3 + 1]);
		}
	}

	return min({ cache[num][1], cache[num][2], cache[num][3] });
}

int main() {
	int N; cin >> N; // ÁýÀÇ ¼ö
	
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= 3; j++) {
			cin >> cost[i][j];
		}
	}

	cout << F(N) << endl;

	return 0;
}