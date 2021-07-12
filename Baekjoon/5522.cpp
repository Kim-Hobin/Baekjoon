#include <iostream>

using namespace std;

const int CNT = 5;

int main() {
	int a, score = 0;
	for (int i = 1; i <= CNT; i++) {
		cin >> a;
		score += a;
	}

	cout << score << endl;

	return 0;
}