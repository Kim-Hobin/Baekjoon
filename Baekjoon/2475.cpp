#include <iostream>

using namespace std;

int main() {
	int num[8], cal = 0;
	for (int i = 1; i <= 5; i++) {
		cin >> num[i];
		cal += num[i] * num[i];
	}
	
	num[6] = cal % 10;

	cout << num[6] << endl;

	return 0;
}