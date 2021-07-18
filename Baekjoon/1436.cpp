#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	int i = 666;

	while (1) {
		int part = i;
		int cnt = 0;

		while (part) {
			if (part % 10 == 6) {
				cnt++;
				if (cnt == 3) {
					break;
				}
			}
			else {
				if (cnt) {
					cnt = 0;
				}
			}
			part /= 10;
		}
		if (cnt >= 3) {
			N--;
			if (!N) {
				cout << i << endl;
				break;
			}
		}
		i++;
	}

	return 0;
}