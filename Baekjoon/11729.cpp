#include <iostream>
#include <cmath>

using namespace std;

void hanoi(int n, int from, int by, int to) { // 원판 개수, 출발지, 경유지, 목적지
	if (n == 1) {
		cout << from << " " << to << "\n";
	} 
	else {
		hanoi(n - 1, from, to, by); // 1번 기둥 n-1개의 원판을 2번 기둥으로 옮기는 과정
		cout << from << " " << to << "\n"; // 1번 기둥의 마지막 원판을 3번 기둥으로 옮김
		hanoi(n - 1, by, from, to); // 2번 기둥의 원판 n-1개를 3번 기둥으로 옮기는 과정
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