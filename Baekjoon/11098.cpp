#include <iostream>

using namespace std;

pair <int, string> info[101];

int main() {
	int n, p;
	pair < int, int> max;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		//first = value, second = i;
		max.first = 0, max.second = 0;
		cin >> p;
		for (int i = 1; i <= p; i++) {
			cin >> info[i].first;
			cin >> info[i].second;
			if (max.first <= info[i].first) {
				max.first = info[i].first;
				max.second = i;
			}
		}

		cout << info[max.second].second << endl;
	}

	return 0;
}
