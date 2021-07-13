#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, K;
	vector<int> div;
	cin >> N >> K;
	
	for (int i = 1; i <= N; i++) {
		if (N % i == 0) {
			div.push_back(i);
		}
	}
	
	if (div.size() >= K) {
		cout << div[K-1] << endl;
	}
	else {
		cout << 0 << endl;
	}

	return 0;
}