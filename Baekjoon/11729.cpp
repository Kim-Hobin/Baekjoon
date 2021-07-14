#include <iostream>
#include <cmath>

using namespace std;

void hanoi(int n, int from, int by, int to) { // ���� ����, �����, ������, ������
	if (n == 1) {
		cout << from << " " << to << "\n";
	} 
	else {
		hanoi(n - 1, from, to, by); // 1�� ��� n-1���� ������ 2�� ������� �ű�� ����
		cout << from << " " << to << "\n"; // 1�� ����� ������ ������ 3�� ������� �ű�
		hanoi(n - 1, by, from, to); // 2�� ����� ���� n-1���� 3�� ������� �ű�� ����
	}
}

int main() {
	int N;
	cin >> N;

	int k = pow(2, N) - 1;
	cout << k << "\n";
	hanoi(N, 1, 2, 3);

	return 0;
}