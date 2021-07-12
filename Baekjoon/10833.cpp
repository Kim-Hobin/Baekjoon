#include <iostream>

using namespace std;

int main() {
	int N; // 학교 개수
	int a, b, rmd = 0;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> a >> b;
		if (!(b / a == 0)) {
			rmd += b % a;
		}
		else rmd += b;
	}

	cout << rmd << endl;

	return 0;
}