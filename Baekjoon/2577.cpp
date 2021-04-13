#include <iostream>
#include <string>

using namespace std;
const int SIZE = 10;

int main() {
	//Input	
	int a, b, c, val;
	int count[SIZE] = { 0 };
	cin >> a >> b >> c;
	val = a * b * c;
	
	//Operation
	int d = 0;
	while (val >= 1) {
		d = val % 10;
		val /= 10;
		count[d]++;
	}

	//Output
	for (int i = 0; i < 10; i++) {
		cout << count[i] << endl;
	}

}