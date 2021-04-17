#include <iostream>
#include <cmath>

using namespace std;


int main() {
	int N;
	cin >> N; // N : 개수, 100이하 

	int cnt = N; // 소수의 개수
	int input[100] = { 0, }; // input : 입력받은 수, 100개 이하

	for (int i = 0; i < N; i++) {
		cin >> input[i];
		if (input[i] == 1) {
			cnt--;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 2; j <= sqrt(input[i]); j++) {
			if (input[i] % j == 0) {
				cnt--;
				break;
			}
		}
	}

	cout << cnt;
	return 0;
 }