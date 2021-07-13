#include <iostream>

using namespace std;

int main() {
	int N, score, sum = 0, cnt = 0;
	cin >> N;
	
	while (N--) {
		cin >> score;
		if (score == 1) { 			
			cnt += score;
			sum += cnt;
		}
		else {
			cnt = 0;
		}
	}

	cout << sum << endl;

	return 0;
}