#include <iostream>

using namespace std;

int main() {
	int day, car[6], cnt = 0;

	cin >> day;
	for (int i = 1; i <= 5; i++) {
		cin >> car[i];
		if (day == car[i]) {
			cnt++;
		}
	}
	
	cout << cnt << endl;

	return 0;
}