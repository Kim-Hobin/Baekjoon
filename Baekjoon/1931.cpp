#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"
using namespace std;

int cmp(pair<int, int> A, pair<int, int> B) 
{
	if (A.second == B.second)
		return A.first < B.first;
	else
		return A.second < B.second;
}

int main()
{
	int N;
	cin >> N;
	vector<pair<int, int>> room(N);
	for (int i = 0; i < N; i++) {
		cin >> room[i].first >> room[i].second;
	}

	sort(room.begin(), room.end(), cmp);

	for (int i = 0; i < N; i++) {
		cout << room[i].first << ' '<< room[i].second << endl;
	}
	
	int now = room[0].second, cnt = 1;
	for (int i = 1; i < N; i++) {
		if (now <= room[i].first) {
			cnt++;
			now = room[i].second;
		}
	}

	cout << cnt << endl;

	return 0;
}