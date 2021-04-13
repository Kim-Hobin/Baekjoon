#include <iostream>
#include <vector>
using namespace std;

// n : 마지막 숫자, m : 개수
int n, m;
vector<int> res;
bool visit[9];
void func(int cnt) {
	if (cnt >= m) {
		for (int i = 0; i < res.size(); i++) {
			cout << res[i] << ' ';
		}
		cout << endl;
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (visit[i] == false) {
			res.push_back(i);
			func(cnt + 1);
			res.pop_back();
		}
		visit[i] = false;
	}
}

int main() {
	cin >> n >> m;
	func(0);
}