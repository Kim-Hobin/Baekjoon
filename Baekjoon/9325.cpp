#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	int s, n, q, p, sum; // 가격, 옵션의 개수, 특정 옵션의 개수, 해당 옵션의 가격
	
	while (T--) {
		sum = 0;
		cin >> s >> n;
		sum += s;
		while (n--) {
			cin >> q >> p;
			sum += q * p;
		}
		
		cout << sum << endl;
	}

	return 0;
}