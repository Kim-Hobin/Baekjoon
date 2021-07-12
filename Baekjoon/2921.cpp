#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	int sum = 0;
	for (int i = 0; i <= N; i++) {
		sum += i;
		for (int j = 0; j <= N; j++) {
			sum += j;
		}
	}

	cout << sum << endl;

	return 0;
}