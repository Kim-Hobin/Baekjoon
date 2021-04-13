#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;
const int SIZE = 9;

int main() {

	int num[SIZE];
	for (int i = 0; i < 9; i++) {
		cin >> num[i];
	}

	int max = num[0];
	int index = 1;
	for (int i = 1; i < 9; i++) {
		if (max < num[i]) {
			max = num[i];
			index = i+1;
		}
	}

	for (int i = 0; i < 9; i++) {
		if (num[i] == max) {
			cout << max << endl << i + 1 << endl;
			break;
		}
	}

	return 0;

	/*
	//vector(value, index)
	vector<vector <int>> maxVal;
	vector<int> value;
	int x = 0;
	for (int i = 0; i < 9; i++) {
		cin >> x;
		value.push_back(x);
		value.push_back(i+1);
		maxVal.push_back(value);
		value.pop_back();
		value.pop_back();
	}

	//Sort
	int max = maxVal[0][0];
	int b = 0;
	int index = 0;

	for (int i = 1; i < 9; i++) {
		if (max < maxVal[i][0]) {
			max = maxVal[i][0];
			index = maxVal[i][1];
		}
	}
	cout << max << endl << index << endl;
	*/
}