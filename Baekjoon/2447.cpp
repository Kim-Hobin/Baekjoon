#include <iostream>

using namespace std;

void mkstar(int i, int j, int n) {
	if ((i / n) % 3 == 1 && (j / n) % 3 == 1) { 
		cout << ' ';
	}
	else { 
		if (n / 3 == 0) { // ±âÀú»ç·Ê
			cout << '*';
		}
		else {
			mkstar(i, j, n / 3);
		}
	}
}

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			mkstar(i, j, n);
		}
		cout << endl;
	}

	return 0;
}