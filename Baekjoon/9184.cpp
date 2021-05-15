#include <iostream>
using namespace std;
const int MAX = 101;

int n[3];
int cache[MAX][MAX][MAX];

int w(int a, int b, int c) {
	if (a <= 0 || b <= 0 || c <= 0) {
		return 1;
	}
	if (!cache[a][b][c]) {
		if (a > 20 || b > 20 || c > 20) {
			return cache[a][b][c] = w(20, 20, 20);
		}
		if (a < b && b < c) {
			return cache[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
		}
		else {
			return cache[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
		}
	}
	else {
		return cache[a][b][c];
	}
}

int main() {
	cin >> n[0] >> n[1] >> n[2];

	while (n[0] != -1 || n[1] != -1 || n[2] != -1) {
		cout << "w(" << n[0] << ", " << n[1] << ", " << n[2] << ") = ";
		cout << w(n[0], n[1], n[2]) << endl;
		cin >> n[0] >> n[1] >> n[2];
	}

	return 0;
}