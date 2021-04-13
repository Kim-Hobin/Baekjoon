#include <iostream>
#define N 10001

using namespace std;
bool num[N];

int d(int n) {
	int digit = 0;
	int result = n;

	while (1) {
		if (n == 0) break;
		digit = n % 10;
		result += digit;
		n /= 10;
	}
	return result;
}
int main() {

	for (int i = 1; i < N; i++) {
		int index = d(i);
		if (index < N) {
			num[index] = true;
		}
	}

	for (int i = 1; i < N; i++) {
		if (num[i] == false) {
			cout << i << endl;
		}
	}
}
