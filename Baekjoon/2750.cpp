#include <iostream>

using namespace std;

const int MAX = 1001;

void Swap(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void SelectionSort(int* num, int N) {
	int minIdx;

	for (int i = 1; i < N; i++) {
		minIdx = i;
		for (int j = i + 1; j <= N; j++) {
			if (num[j] < num[minIdx]) { // minIdx 값이 j인덱스 값보다 크다면
				minIdx = j;
			}
		}
		Swap(num[minIdx], num[i]);
	}
}

int main() {
	int N;
	cin >> N;

	int num[MAX] = { 0 };

	for (int i = 1; i <= N; i++) {
		cin >> num[i];
	}

	SelectionSort(num, N);

	for (int i = 1; i <= N; i++) {
		cout << num[i] << endl;
	}

	return 0;
}