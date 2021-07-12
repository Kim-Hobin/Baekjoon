#include <iostream>

using namespace std;

int main() {
	int T, N;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		cin >> N;
		int C, sumC = 0;
		float G, avgG = 0.0;

		for (int j = 1; j <= N; j++) {
			cin >> C >> G;
			sumC += C;
			avgG += C * G;
		}

		cout << sumC << ' ';
		cout << fixed;
		cout.precision(1);
		cout << avgG / sumC << endl;
	}

	return 0;
}