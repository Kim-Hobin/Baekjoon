#include <iostream>
using namespace std;


int main() {
	int roomNum;
	int layer = 0;
	int sum = 2;
	cin >> roomNum;

	if (roomNum == 1) {
		layer = 1;
	}
	while (roomNum >= sum) {
		sum += 6 * (layer++);
	}
	cout << layer << endl;
	return 0;
}