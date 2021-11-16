#include <iostream>
#include <queue>
#define endl "\n"
using namespace std;

int main()
{
	queue<int> q;
	int N; cin >> N;

	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	while (q.size() > 1) {
		q.pop();
		q.push(q.front());
		q.pop();
	}

	cout << q.front() << endl;

	return 0;
}