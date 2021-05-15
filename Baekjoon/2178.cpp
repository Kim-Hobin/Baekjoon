#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>

using namespace std;
const int MAX = 101;

queue<pair<int, int>> q;
int N, M; // 가로, 세로 2 <= N, M <= 100
bool maze[MAX][MAX];
string inp;
int cnt[MAX][MAX];
bool flag[MAX][MAX];

pair<int, int> direction[4] = {
	{-1, 0},
	{0, 1},
	{1, 0},
	{0, -1}
};

void visit(int cur_y, int cur_x) {
	maze[cur_y][cur_x] = 0;
	q.push({ cur_y, cur_x });
	
}

bool check(int ny, int nx) {
	if (!maze[ny][nx]) {
		return false;
	}
	if (ny < 0 || nx < 0 || ny >= N || nx >= M) {
		return false;
	}

	return true;
}

void bfs(int start_y, int start_x) {
	visit(start_y, start_x);
	cnt[start_y][start_x]++;

	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();

		for (auto i : direction) {
			int ny = y + i.first;
			int nx = x + i.second;

			if (check(ny, nx)) {
				cnt[ny][nx] = cnt[y][x] + 1;
				visit(ny, nx);
			}
		}
	}
}

int main() {
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> inp;
		for (int j = 0; j < M; j++) {
			maze[i][j] = inp[j] - '0';
		}
	}

	bfs(0, 0);

	cout << cnt[N - 1][M - 1] << endl;

	return 0;
}