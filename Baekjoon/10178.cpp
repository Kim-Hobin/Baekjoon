#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	int c, v; // 사탕의 개수, 형제의 수
	while (T--) {
		cin >> c >> v;
		cout << "You get " << c / v << " piece(s) and your dad gets ";
		cout << c % v << " piece(s)." << endl;
	}

	return 0;
}