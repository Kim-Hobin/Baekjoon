#include <iostream>
#include <algorithm> //reverse
#include <string> //string
using namespace std;


int main() {
	string A, B;

	cin >> A >> B;

	string res(max(A.size(), B.size()), '0');
	bool one = false;
	
	for (int i = 0; i < res.size(); i++) {
		int temp = one;
		one = false;

		if (i < A.size()) {
			temp += A[A.size() - i - 1] - '0';
		}
		if (i < B.size()) {
			temp += B[B.size() - i - 1] - '0';
		}
		if (temp >= 10) {
			one = true;
			temp -= 10;
		}

		res[res.size() - i - 1] = temp + '0';
	}

	if (one) {
		res.insert(res.begin(), '1');
	}
	cout << res << endl;

	return 0;
}