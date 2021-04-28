#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int a, b, c;

	while (1) {
		cin >> a >> b >> c;
		bool flag = false;
		if (a >= b) {
			if (a >= c) {
				if (pow(a,2) == pow(b,2) + pow(c,2)) {
					flag = true;
				}
			}
			else {
				if (pow(c,2) == pow(a,2) + pow(b,2)) {
					flag = true;
				}
			}
		}
		else {
			if (b >= c) {
				if (pow(b, 2) == pow(a, 2) + pow(c, 2)) {
					flag = true;
				}
			}
			else {
				if (pow(c, 2) == pow(a, 2) + pow(b, 2)) {
					flag = true;
				}
			}
		}
		if (a == 0 && b == 0 && c == 0) {
			break;
		}
		if (flag) {
			cout << "right" << endl;
		}
		else {
			cout << "wrong" << endl;
		}
	}
	return 0;
}