#include <iostream>
#include <vector>
using namespace std;

int n, m;
bool visit[9];
vector<int> res;

void func(int cnt) {
	if (cnt >= m) {
		for (int i = 0; i < res.size(); i++) {
			cout << res[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (visit[i] == false) {
			res.push_back(i);
			visit[i] = true;
			func(cnt + 1);
			res.pop_back();
			visit[i] = false;
		}
	}
	return;
}

int main() {
	cin >> n >> m;
	func(0);
	return 0;
}