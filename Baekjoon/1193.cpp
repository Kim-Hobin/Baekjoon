#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	int n;
	int cnt = 1;

	cin >> n;
	while (n > sum) {
		sum += cnt;
		cnt++;
	}
	
	cnt--;
	sum = sum - cnt;

	int x = 0;
	x = n - sum;

	int a;
	int b;
	int c = cnt + 1;

	if (cnt % 2 == 1) {
		b = x;
		a = c - b;
	}
	else {
		a = x;
		b = c - a;
	}
	
	cout << a << '/' << b << endl;
	
	return 0;
}