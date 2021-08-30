#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"
using namespace std;

int cmp(int a, int b) {
	return a > b;
}

int main()
{
	int N, K, cnt = 0;
	cin >> N >> K;
	vector<int> A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	
	sort(A.begin(), A.end(), cmp);
	
	for (int i = 0; i < N; i++) {
		while (K - A[i] >= 0) {
			cnt++;
			K -= A[i];
		}
	}

	cout << cnt << endl;

	return 0;
}