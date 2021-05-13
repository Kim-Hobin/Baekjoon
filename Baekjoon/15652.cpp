#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1001;

int n, m;
vector<int> stack;

void dfs() {
	if (stack.size() == m) {
		for (auto i : stack) {
			cout << i << ' ';
		}
		cout << '\n';
		return;
	}

	for (int i = 1; i < n + 1; i++) {
		if (stack.size() == 0 || stack.back() <= i) {
			stack.push_back(i);
			dfs();
			stack.pop_back();
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	dfs();
}
