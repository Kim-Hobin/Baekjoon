#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;
/*
int main() {
	int num1 = 0;
	int num2 = 0;
	int count = 0;
	cin >> count;

	for (int j = 0; j < count; j++) {
		cin >> num1 >> num2;
		while ((num1 < 1 || num1 > 45000) || (num2 < 1 || num2 > 45000)) {
			cin >> num1 >> num2;
		}
		int temp = 0;
		if (num1 > num2) {
			temp = num2;
			num2 = num1;
			num1 = temp;
		}

		int i = 2;
		int x = 1;
		int temp1 = 0;
		int temp2 = 0;
		temp1 = num1;
		temp2 = num2;
		while ((i * i <= num1)) {
			bool k = false;
			int r = 0;
			if (temp1 % i == 0) {
				r = temp1 / i;
				k = true;

			}
			if ((temp1 % i == 0) && (temp2 % i == 0)) {
				x = x * i;
				temp1 /= i;
				temp2 /= i;
			}
			else if (k && (temp1 % r == 0) && (temp2 % r == 0)) {
				temp1 /= r;
				temp2 /= r;
				x *= r;
				i++;
			}
			else {	
				i++;
			}
		}

		if (num2 % num1 == 0) {
			x = num2;
		}
		else {
			x *= temp1 * temp2;
		}

		cout << x << '\n';
	}
	return 0;
}*/

int main() {
	int num1 = 0;
	int num2 = 0;
	int count = 0;
	cin >> count;
	for (int j = 0; j < count; j++) {
		cin >> num1 >> num2;

		while ((num1 < 1 || num1 > 45000) || (num2 < 1 || num2 > 45000)) {
			cin >> num1 >> num2;
		}

		int i = 2;
		int x = 1;
		int temp = 0;

		if (num1 > num2) {
			temp = num2;
			num2 = num1;
			num1 = temp;
		}

		int temp1 = 0;
		int temp2 = 0;
		temp1 = num1;
		temp2 = num2;
		cout << temp1 << ' ' << temp2 << ' ';
		while ((i * i <= num1)) {
			if ((temp1 % i == 0) && (temp2 % i == 0)) {
				x = x * i;
				temp1 /= i;
				temp2 /= i;
				cout << temp1 << ' ' << temp2 << ' ';
			}
			else {
				i++;
			}
		}
		if (num1 == temp1) {
			x = num1 * num2;
		}
		else if (num2 % num1 == 0) {
			x = num2;
		}
		else {
			x *= temp1 * temp2;
		}
		cout << x << '\n';
	}
	return 0;
}