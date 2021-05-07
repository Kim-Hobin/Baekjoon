#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		long long x, y;
		cin >> x >> y;

		long long move, max = 0;

		while (max * max <= y - x) {
			max++;
		}
		max--;

		move = 2 * max - 1;
		long long a = (y - x) - max * max;
		a = (long long)ceil((double)a / (double)max);

		move += a;
		cout << move << "\n";
	}

	return 0;
}