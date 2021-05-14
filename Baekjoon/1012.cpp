#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>

using namespace std;
const int MAX = 51;

queue<pair<int, int>> q;
int T, M, N, K; // TestCase, 가로, 세로, 배추 위치의 개수
bool field[MAX][MAX];
int tx, ty;

pair<int, int> direction[4] = {
	{-1, 0},
	{0, 1},
	{1, 0},
	{0, -1}
};

void visit(int cur_y, int cur_x) {
	field[cur_y][cur_x] = 0;
	q.push({ cur_y, cur_x });
}

bool check(int ny, int nx) {
	if (!field[ny][nx]) {
		return false;
	}
	if (ny < 0 || nx < 0 || ny >= N || nx >= M) {
		return false;
	}
	return true;
}

void bfs(int start_y, int start_x) {
	visit(start_y, start_x);

	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;

		q.pop();

		for (auto i : direction) {
			int ny = y + i.first;
			int nx = x + i.second;
			
			if (check(ny, nx)) {
				visit(ny, nx);
			}
		}
	}
}


int main() {
	cin >> T;

	for (int test = 0; test < T; test++) {
		cin >> M >> N >> K;

		memset(field, false, sizeof(field));

		int cnt = 0;

		for (int i = 0; i < K; i++) {
			cin >> tx >> ty;
			field[ty][tx] = 1;
		}

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (field[i][j]) {
					cnt++;
					bfs(i, j);
				}
			}
		}


		cout << cnt << endl;
	}
	

	return 0;
}