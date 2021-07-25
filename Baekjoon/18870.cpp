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
	// ���� ���Ϳ� ���� ���͸� �����Ͽ� �ߺ��� �����ϰ� ������ ���� 
	vector<int> cv(v);
	sort(cv.begin(), cv.end());
	cv.erase(unique(cv.begin(), cv.end()), cv.end());

	for (int i = 0; i < N; i++) {
		auto it = lower_bound(cv.begin(), cv.end(), v[i]);
		cout << it - cv.begin() << ' ';
	}

	return 0;
}