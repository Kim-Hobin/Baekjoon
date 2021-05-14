#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>

using namespace std;
const int MAX = 26;


int n; // 지도의 크기( 5 ~ 25)
bool map[MAX][MAX]; // 단지
string num;
vector<int> cnts;
int cnt;
pair<int, int> direction[4] = {
	{-1, 0},
	{0, 1},
	{1, 0},
	{0, -1}
};

bool check(int cur_y, int cur_x) {
	if ((cur_y < 0 || cur_x < 0) || (cur_y >= n || cur_x >= n)) {
		return false;
	}
	if (!map[cur_y][cur_x]) { // 값이 0이면 false
		return false;
	}

	return true;
}

void dfs(int y, int x) {
	map[y][x] = 0;
	cnt++;
	for (int i = 0; i < 4; i++) {
		int ny = y + direction[i].first;
		int nx = x + direction[i].second;
		if (check(ny, nx)) {
			dfs(ny,nx);
		}
	}
}

int main() {
	cin >> n;
	int res = 0;
	for (int i = 0; i < n; i++) { 
		cin >> num; 
		for (int j = 0; j < n; j++) {
			map[i][j] = num[j] - '0';
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j]) {
				dfs(i, j);
				res++;
				cnts.push_back(cnt);
				cnt = 0;
			}
		}
	}
	sort(cnts.begin(), cnts.end());
	
	cout << res << endl;
	for (auto i : cnts) {
		cout << i << endl;
	}

	return 0;
}