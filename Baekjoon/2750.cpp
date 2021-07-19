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

void BubbleSort(int* num, int N) {
	for (int i = N; i > 1; i--) {
		for (int j = 1; j < i; j++) {
			if (num[j] > num[j + 1]) {
				Swap(num[j], num[j + 1]);
			}
		}
	}
}

void InsertionSort(int* num, int N) {
	int i, j, key;
	for (i = 1; i < N; i++) {
		key = num[i];
		j = i - 1;
		while ((j >= 0) && (num[j] > key)) {
			num[j + 1] = num[j];
			j--;
		}
		num[j + 1] = key;
	}
}

int main() {
	int N;
	cin >> N;

	int num[MAX] = { 0 };

	for (int i = 1; i <= N; i++) {
		cin >> num[i];
	}

	BubbleSort(num, N);

	for (int i = 1; i <= N; i++) {
		cout << num[i] << endl;
	}

	return 0;
}