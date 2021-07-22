#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int N;
string list[20001];
string sorted[20001];

void merge(int left, int mid, int right) {
	int i, j, k, l;
	i = left;
	j = mid + 1;
	k = left;

	while (i <= mid && j <= right) { // 분할되어 정렬이 이루어진 list의 합병
		if (list[i].length() < list[j].length()) {
			sorted[k++] = list[i++];
		}
		else if ((list[i].length() == list[j].length()) && (list[i] < list[j])) {
			sorted[k++] = list[i++];
		}
		else {
			sorted[k++] = list[j++];
		}
	}

	if (i > mid) {
		for (l = j; l <= right; l++) {
			sorted[k++] = list[l];
		}
	}
	else {
		for (l = i; l <= mid; l++) {
			sorted[k++] = list[l];
		}
	}

	for (l = left; l <= right; l++) { // 임시 배열 sorted[]의 리스트를 배열 list[]로 재복사
		list[l] = sorted[l];
	}
}

void merge_sort(int left, int right) {
	int mid;

	if (left < right) { // 기저사례, 리스트의 요소가 1개가 남을 때까지 분할
		mid = (left + right) / 2;
		merge_sort(left, mid); // 분할한 앞쪽의 리스트를 정렬
		merge_sort(mid + 1, right); // 뒤쪽의 리스트를 정렬
		merge(left, mid, right); // 정렬한 2개의 부분 배열을 합병
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	// 입력부
	for (int i = 0; i < N; i++) {
		cin >> list[i];
	}

	merge_sort(0, N - 1);

	for (int i = 0; i < N; i++) {
		if (list[i] == list[i + 1]) {
			continue;
		}
		cout << list[i] << '\n';
	}

	return 0;
}


//void swap(int i, int j) {
//	string temp = list[i];
//	list[i] = list[j];
//	list[j] = temp;
//}
//
//bool compare(int i, int j) {
//	for (int k = 0; k < list[i].length(); k++) {
//		if (list[i][k] > list[j][k]) {
//			return true;
//		}
//		else if (list[i][k] < list[j][k]) {
//			return false;
//		}
//	}
//}

//void Sort() {
//	for (int i = 0; i < N - 1; i++) {
//		for (int j = i + 1; j < N; j++) {
//			// 길이 비교
//			if (list[i].length() > list[j].length()) {
//				swap(i, j);
//			}
//			// 길이가 같을 때 문자 비교
//			else if (list[i].length() == list[j].length()) {
//				if (compare(i, j)) {
//					swap(i, j);
//				}
//			}
//		}
//	}
//}