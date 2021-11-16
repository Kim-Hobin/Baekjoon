#include <iostream>
#include <queue>

#define endl "\n"
using namespace std;

int main()
{
	int T; cin >> T;
	while (T--) {
		int N, M;
		int cnt = 0, imp = 0;
		cin >> N >> M;
		queue<pair<int, int>> q;
		priority_queue<int> pq; //우선순위 큐
		
		//입력
		for (int i = 0; i < N; i++) {
			cin >> imp;
			q.push({ i, imp });
			pq.push(imp);
		}

		//연산
		while (!q.empty()) {
			int index = q.front().first; //i
			int value = q.front().second; //중요도
			q.pop();
			if (pq.top() == value) {
				pq.pop();
				++cnt;
				if (index == M) {
					cout << cnt << endl;
					break;
				}
			}
			else q.push({ index, value });
		}
	}

	return 0;
}