#include <iostream>
#include <vector>
using namespace std;

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
		stack.push_back(i);
		dfs();
		stack.pop_back();
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	dfs();
}
