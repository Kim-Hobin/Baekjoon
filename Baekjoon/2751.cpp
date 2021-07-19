#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, tmp;
	vector<int> arr;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> tmp;
		arr.push_back(tmp);
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < N; i++) {
		cout << arr[i] << '\n';
	}

	return 0;
}