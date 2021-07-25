#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	vector<int> v(N);

	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	// 원본 벡터와 원본 벡터를 복사하여 중복을 제거하고 정렬할 벡터 
	vector<int> cv(v);
	sort(cv.begin(), cv.end());
	cv.erase(unique(cv.begin(), cv.end()), cv.end());

	for (int i = 0; i < N; i++) {
		auto it = lower_bound(cv.begin(), cv.end(), v[i]);
		cout << it - cv.begin() << ' ';
	}

	return 0;
}