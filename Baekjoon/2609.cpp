#include <iostream>

using namespace std;

int gcd(int a, int b) {
	int c;

	// 유클리드 호제법
	while (b != 0) { // a : 4, b : 6
		c = a % b; // c : 4, 2, 0
		a = b; // a : 6, 4, 2
		b = c; // b : 4, 2, 0 
	}

	return a;
}

int main() {
	int a = 0, b = 0;
	cin >> a >> b;

	cout << gcd(a, b) << endl;
	cout << a * b / gcd(a, b) << endl;

	return 0;
}