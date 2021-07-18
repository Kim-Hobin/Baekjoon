#include <iostream>
#include<cstdlib>

using namespace std;

const int MAX = 300001;

int main() {
	int N, M, temp, sum = MAX; // 카드의 개수, 목표값, 3장의 카드의 합
	int card[MAX] = { 0, };
	cin >> N >> M;
	
	// 입력
	for (int i = 1; i <= N; i++) { 
		cin >> card[i];
	}

	for (int i = 1; i <= N; i++) {
		if (sum == 0) { // sum : M - 3장의 카드의 합, sum = 0 -> 목표값과 같다
			break;
		}
		for (int j = 1; j <= N; j++) {
			if (sum == 0) {
				break;
			}
			for (int k = 1; k <= N; k++) {
				if (i != j && j != k && i != k) {
					temp = card[i] + card[j] + card[k];
					if (temp == M) {
						sum = 0;
						break;
					}
					else {
						if (M - temp >= 1) { // M과의 차이가 가장 작은 값을 sum으로 저장
							if (sum >= M - temp) {
								sum = M - temp;
							}
						}
					}
				}
			}
		}
	}
	
	cout << M - sum << endl;

	return 0;
}