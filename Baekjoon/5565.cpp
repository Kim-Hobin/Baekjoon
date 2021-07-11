#include <iostream>

using namespace std;

const int CNT = 10;

int main() {
	int n[CNT + 1], sum = 0;
	
	cin >> n[10];

	for (int i = 1; i < CNT; i++) {
		cin >> n[i];
		sum += n[i];
	}

	cout << n[10] - sum << endl;

	return 0;
}