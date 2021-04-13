#include <iostream>

using namespace std;

int main() {
	int x = 0;
	int temp = 0;
	int count = 0;
	cin >> x;
	temp = x;
	int y;
	do {
		y = x / 10 + x % 10;
		if (y < 10) {
			x = (x % 10) * 10 + y;
		}
		else {
			x = (x % 10) * 10 + (y % 10);
		}
		count++;
	} while (temp != x);
	cout << count << '\n';
	return 0;
}