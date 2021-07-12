#include <iostream>

using namespace std;

int main() {
	int N; // 멀티탭의 개수
	cin >> N;
	
	int a, sum = 1 - N;

	while (N--) {
		cin >> a;
		sum += a;
	}
	
	cout << sum << endl;

	return 0;
}