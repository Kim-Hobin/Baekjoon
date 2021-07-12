#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	int a, b, c; // 꼭짓점, 모서리, 면의 수
	
	while (T--) {
		cin >> a >> b;
		c = 2 - a + b;
		cout << c << endl;
	}

	return 0;
}