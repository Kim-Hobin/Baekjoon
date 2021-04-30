#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int x1, y1, x2, y2; // -10000보다 크거나 같고 100000보다 작거나 같은 정수
	int r1, r2;// 10000보다 작거나 같은 자연수
	
	int n, cnt;
	float d; // 두 점 사이의 거리

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)); 
		cnt = 0;

		if ((d < r1 + r2) && abs(r2 - r1) < d) { // 만나는 점이 2개인 경우
			cnt = 2;
		}
		else if (d == r1 + r2 || abs(r2-r1) == d && d != 0) { // 만나는 점이 1개인 경우
			cnt = 1;
		}
		else if (d > r1 + r2) { //만나는 점이 없는 경우
			cnt = 0;
		}
		else if (d == 0 && r1 == r2) { // 두 원이 일치하는 경우
			cnt = -1;
		}

		cout << cnt << endl;
	}
	return 0;
}