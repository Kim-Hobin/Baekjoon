#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>

using namespace std;
const int MAX = 1001;

int M, N; // 가로, 세로
int tomato[MAX][MAX]; // 단지
string num;
queue<pair<int, int>> q;
int result;
bool flag;

pair<int, int> direction[4] = {
	{-1, 0},
	{0, 1},
	{1, 0},
	{0, -1}
};

bool check(int ny, int nx) {
	return (0 <= ny && 0 <= nx && ny < N && nx < M);
}

void bfs() {
	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();

		for (auto i : direction) {
			int ny = y + i.first;
			int nx = x + i.second;

			if (check(ny, nx) == 1 && tomato[ny][nx] == 0) {
				tomato[ny][nx] = tomato[y][x] + 1;
				q.push({ny, nx});
				result = max(result, tomato[ny][nx]);
			}
		}
	}
}

int main() {
	cin >> M >> N; // M : 가로, N : 세로, 2 <= M, N <=1000

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> tomato[i][j];
			if (!tomato[i][j]) {
				flag = true;
			}
			if (tomato[i][j] == 1) {
				q.push({ i, j });
			}
		}
	}

	if (!flag) {
		cout << 0 << endl;
		return 0;
	}

	bfs();

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (tomato[i][j] == 0) {
				cout << -1 << endl;
				return 0;
			}
		}
	}

	cout << result - 1 << endl;
	return 0;
}