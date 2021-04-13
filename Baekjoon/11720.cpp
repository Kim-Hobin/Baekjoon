#include <iostream>
using namespace std;

int main() {
	int n;
	char a;
	int sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		sum += a - '0';
	}
	cout << sum << endl;
}