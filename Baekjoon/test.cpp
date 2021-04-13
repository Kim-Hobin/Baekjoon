/*
#include <iostream>
using namespace std;

int a;
// 1. 전역변수 2. 파라미터로 넘겨주기
void func(int b) {

	if (b > a) {
		return;
	}
	cout << b << endl;
	func(b + 1);
}

int main() {
	cin >> a;
	func(1);
	return 0;
}

#include <iostream>
using namespace std;

int a;

void func(int b) {

	if (b > a) {
		return;
	}
	cout << b << endl;
	func(b + 1);
}

void func2(int b, int c) {
	
	if (b > a) {
		return;
	}

	cout << c;
	if (c == (b%2)+3) {
		cout << endl;
		func2(b + 1, (b + 1) % 2);
	}
	else {
		func2(b, c + 1);
	}

}
int main() {
	cin >> a;
	// func(1);

	for (int i = 1; i <= a; i++) {
		for (int j = i; j <= a; j++) {
			cout << j;
		}
		cout << endl;
	}

	func2(1,1);

	
	return 0;
}
*/

#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector <int> asd;

void func(int a) {
	if (a >= m) {
		for (int i = 0; i < asd.size(); i++) {
			cout << asd[i] << ' ';
		}
		cout << endl;
		return;
	}
	for (int i = 1; i <= n; i++) {
		asd.push_back(i); //1, 4
		func(a+1);
		asd.pop_back();
	}
	// 1, 1
}

int main() {
	cin >> n >> m;
	func(0);
	return 0;
}