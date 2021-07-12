#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	int a, b, i = 1;
	while (T--) {
		cin >> a >> b;
		cout << "Case " << i++ << ": " << a + b << endl;
	}

	return 0;
}