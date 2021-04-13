# include <iostream>
using namespace std;
const int SIZE = 42;
int main() {

	int num[SIZE] = { 0 };
	int a;
	int b; 
	int count = 0;
	int swap = 0;

	for (int i = 0; i < 10; i++) {
		cin >> a;
		a %= 42;
		num[a] = 1;
	}
	
	for (int i = 0; i < SIZE; i++) {
		if (num[i] != 0) {
			count++;
		}
	}

	cout << count << endl;
}