#include <iostream>
#include <queue>

#define endl "\n"
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	queue<int> q; 
	string str;
	int N, data;
	cin >> N;

	while (N--) {
		cin >> str;
		if (str == "push") {
			cin >> data;
			q.push(data);
		}
		else if (str == "pop") {
			if (q.size() == 0) {
				cout << "-1" << endl;
			}
			else {
				data = q.front();
				q.pop();
				cout << data << endl;
			}
		}
		else if (str == "size") {
			cout << q.size() << endl;
		}
		else if (str == "empty") {
			cout << q.empty() << endl;
		}
		else if (str == "front") {
			if (q.size() == 0) {
				cout << "-1" << endl;
			}
			else {
				cout << q.front() << endl;
			}
		}
		else if (str == "back") {
			if (q.size() == 0) {
				cout << "-1" << endl;
			}
			else {
				cout << q.back() << endl;
			}
		}
	}

	return 0;
}