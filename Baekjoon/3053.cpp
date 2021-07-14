#include <iostream>
#include <cmath>
#define PI 3.1415926535897932

using namespace std;

int main() {
	int R;
	cin >> R;

	cout << fixed;
	cout.precision(6);
	cout << pow(R, 2) * PI << endl;
	cout << pow(R, 2) * 2 << endl;

	return 0;
}