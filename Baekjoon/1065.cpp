#include <iostream>

using namespace std;

int d(int n) {
	
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (i < 100) {
			cnt++;
		}
		else if (i == 1000) break;
		else {
			int j = 0;
			int nx = i;
			int num[3] = { 0 };
			while (nx > 0) {
				num[j] = nx % 10;
				nx /= 10;
				j++;
			}
			if (num[0] - num[1] == num[1] - num[2]) {
				cnt++;
			}
		}
	}
	return cnt;

}
int main() {
	int n;
	cin >> n;
	cout << d(n) << endl;
}