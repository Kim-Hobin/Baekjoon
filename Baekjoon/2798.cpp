#include <iostream>
#include<cstdlib>

using namespace std;

const int MAX = 300001;

int main() {
	int N, M, temp, sum = MAX; // ī���� ����, ��ǥ��, 3���� ī���� ��
	int card[MAX] = { 0, };
	cin >> N >> M;
	
	// �Է�
	for (int i = 1; i <= N; i++) { 
		cin >> card[i];
	}

	for (int i = 1; i <= N; i++) {
		if (sum == 0) { // sum : M - 3���� ī���� ��, sum = 0 -> ��ǥ���� ����
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
						if (M - temp >= 1) { // M���� ���̰� ���� ���� ���� sum���� ����
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