#include <iostream>
#include <string>
using namespace std;

int main() {
	string num1;
	string num2;
	string bigger;
	cin >> num1 >> num2;
	
	for (int i = 2; i >= 0; i--) {
		if (num1[i] > num2[i]) {
			bigger = num1;
			break;
		}
		else if (num1[i] < num2[i]) {
			bigger = num2;
			break;
		}
	}
	for (int i = 2; i >= 0; i--) {
		cout << bigger[i];
	}
	
	return 0;
}