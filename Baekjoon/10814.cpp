#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int N, year;
string name;
vector<pair<int, string>> judgeDB;

bool cmp(pair<int, string> a, pair<int, string> b) {
	if (a.first < b.first) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> year >> name;
		judgeDB.push_back({ year, name });
	}

	stable_sort(judgeDB.begin(), judgeDB.end(), cmp);

	for (int i = 0; i < N; i++) {
		cout << judgeDB[i].first << ' ' << judgeDB[i].second << '\n';
	}

	return 0;
}