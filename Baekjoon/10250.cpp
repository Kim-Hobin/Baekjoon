#include <iostream>
using namespace std;


int main() {
	int cnt;
	int H, W, N;
	cin >> cnt;
	for (int i = 0; i < cnt; i++) {
		cin >> H >> W >> N;

		int layer = (N - 1) % H + 1;
		int Num = (N - 1) / H + 1;

		int roomNum = layer * 100 + Num;

		cout << roomNum << endl;
	}

	return 0;
}