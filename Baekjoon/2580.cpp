#include <iostream>
#include <vector>
using namespace std;

const int MAX =10;

int board[MAX][MAX];
vector<pair<int, int>> blanks;
bool flag;

// �����ڸ��� �� ���� �Ǵ���
bool check(int current_y, int current_x, int number) {
	// current_loc : blanks �ε���
	for (int i = 1; i < MAX; i++) {
		// ����
		// number : �� �� �ִ� ���
		// i : board�� �ε���
		if (number == board[current_y][i]) {
			return false;
		}
		// ����
		if (number == board[i][current_x]) {
			return false;
		}
		// 3x3����
		int ny = ((i - 1) / 3 + 1) + ((current_y - 1) / 3) * 3;
		int nx = ((i - 1) % 3 + 1) + ((current_x - 1) / 3) * 3;
		if (number == board[ny][nx]) {
			return false;
		}
	}
	return true;
}

void dfs(int current_loc) {
	if (current_loc == blanks.size()) {
		flag = true;
		return;
	}

	int current_x = blanks[current_loc].second;
	int current_y = blanks[current_loc].first;

	// ��ũ�� ��ĭ, i : �� �� �ִ� ���
	for (int i = 1; i < MAX; i++) { 
		if (check(current_y, current_x, i)) {;
			board[current_y][current_x] = i;
			dfs(current_loc+1);
			if (flag) {
				return;
			}
			board[current_y][current_x] = 0;
		} 
	}
}

void print() {
	cout << endl;
	for (int i = 1; i < MAX; i++) {
		for (int j = 1; j < MAX; j++) {
			cout << board[i][j] << ' ';
		}
		cout << endl;
	}
}

int main() {
	for (int i = 1; i < MAX; i++) {
		for (int j = 1; j < MAX; j++) {
			cin >> board[i][j];
			if (board[i][j] == 0) {
				blanks.push_back({ i, j });
			}
		}
	}

	dfs(0);

	print();

	return 0;
}