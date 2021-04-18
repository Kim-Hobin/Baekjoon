#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int x, y, w, h; // (x,y) : 현재 좌표, (w,h) : 직사각형 꼭지점
	cin >> x >> y >> w >> h;

	int minX = min(x, w - x);
	int minY = min(y, h - y);

	cout << min(minX, minY);
	return 0;
}