#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> stack;
bool visited[9];


void dfs() {
	if (stack.size() == m) {
		for (auto i : stack) {
			cout << i << ' ';
		}
		cout << endl;
		return;
	}
	for (int i = 1; i < n + 1; i++) {
		if (!visited[i] && (stack.size() == 0 || stack.back() < i)) {
			stack.push_back(i);
			visited[i] = true;
			dfs();
			stack.pop_back();
			visited[i] = false;
		}
	}
}

int main() {
	cin >> n >> m;
	dfs();
}