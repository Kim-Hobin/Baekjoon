#include <iostream>

using namespace std;

int n = 0;
int m = 1;
int nm = 1;

int pibo(int cnt) {
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