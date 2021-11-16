#include <iostream>
#include <queue>
#include <vector>

#define endl "\n"
using namespace std;

int main()
{
	queue<int> q;
	int N; cin >> N;
	int K; cin >> K;
	vector<int> ans;

	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	while (q.size() != 0) {
		for (int i = 1; i <= K - 1; i++) {
			q.push(q.front());
			q.pop();
		}
		ans.push_back(q.front());
		q.pop();

	}

	cout << '<';
	for (auto i : ans) {
		cout << i;
		if (i != ans.back()) cout << ", ";
		else cout << '>' << endl;
	}

	return 0;
}