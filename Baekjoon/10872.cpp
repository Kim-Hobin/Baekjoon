#include <iostream>

using namespace std;

int factorial(int n) {
	if (n == 0) {
		return 1;
	}
	return n * factorial(n - 1);
}

int main() {
	int i = 0;
	cin >> i;
	int res = factorial(i);
	cout << res << endl;
	return 0;
}