#include <iostream>

using namespace std;

int main() {
	int N, sum, part;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		sum = i;
		part = i;
		while (part) { // 각 자리수 연산
			sum += part % 10;
			part /= 10;
		}

		if (sum == N) { // sum이 N의 생성자라면 
			cout << i << endl;
			return 0;
		}
	}
	
	cout << "0" << endl;

	return 0;
}