#include <iostream>

using namespace std;

int main() {
	int N, x[52], y[52], cnt;
	cin >> N;

	for (int i = 1; i <= N; i++) { // �Է�
		cin >> x[i] >> y[i];
	}

	for (int i = 1; i <= N; i++) { // ����
		cnt = 1;
		for (int j = 1; j <= N; j++) {
			if (x[i] < x[j] && y[i] < y[j]) { // �ڽź��� ��ġ�� ũ�ٸ�
				cnt++; // ī��Ʈ ����
			}
		}
		cout << cnt++ << endl;
	}

	return 0;
}
