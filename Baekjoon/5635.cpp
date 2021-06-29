#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<pair<pair<int, int>, pair<int, string>>> info(n);

	for(int i= 0; i < n; i++) {
		cin >> info[i].second.second >> info[i].second.first >> info[i].first.second >> info[i].first.first;
	}

	sort(info.begin(), info.end());

	cout << info[n - 1].second.second << "\n" << info[0].second.second << "\n";

	return 0;
}