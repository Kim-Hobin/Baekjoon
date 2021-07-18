#include <iostream>

using namespace std;

int main() {
	int N, sum, part;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		sum = i;
		part = i;
		while (part) { // �� �ڸ��� ����
			sum += part % 10;
			part /= 10;
		}

		if (sum == N) { // sum�� N�� �����ڶ�� 
			cout << i << endl;
			return 0;
		}
	}
	
	cout << "0" << endl;

	return 0;
}