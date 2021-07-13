#include <iostream>

using namespace std;

long long n = 0;
long long m = 1;
long long nm = 1;

long long pibo(int cnt) {
	if (cnt > 1) {
		nm = n + m;
		n = m;
		m = nm;

		return pibo(cnt - 1);
	}
	else if (cnt == 0) {
		return n;
	}
	else {
		return nm;
	}
}

int main() {
	int cnt;
	cin >> cnt;

	cout << pibo(cnt) << endl;

	return 0;
}