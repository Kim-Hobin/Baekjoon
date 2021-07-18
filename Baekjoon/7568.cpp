#include <iostream>

using namespace std;

int main() {
	int N, x[52], y[52], cnt;
	cin >> N;

	for (int i = 1; i <= N; i++) { // 입력
		cin >> x[i] >> y[i];
	}

	for (int i = 1; i <= N; i++) { // 연산
		cnt = 1;
		for (int j = 1; j <= N; j++) {
			if (x[i] < x[j] && y[i] < y[j]) { // 자신보다 덩치가 크다면
				cnt++; // 카운트 증가
			}
		}
		cout << cnt++ << endl;
	}

	return 0;
}
