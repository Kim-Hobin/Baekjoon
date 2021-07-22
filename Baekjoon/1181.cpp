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

	while (i <= mid && j <= right) { // ���ҵǾ� ������ �̷���� list�� �պ�
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

	for (l = left; l <= right; l++) { // �ӽ� �迭 sorted[]�� ����Ʈ�� �迭 list[]�� �纹��
		list[l] = sorted[l];
	}
}

void merge_sort(int left, int right) {
	int mid;

	if (left < right) { // �������, ����Ʈ�� ��Ұ� 1���� ���� ������ ����
		mid = (left + right) / 2;
		merge_sort(left, mid); // ������ ������ ����Ʈ�� ����
		merge_sort(mid + 1, right); // ������ ����Ʈ�� ����
		merge(left, mid, right); // ������ 2���� �κ� �迭�� �պ�
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	// �Էº�
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
//			// ���� ��
//			if (list[i].length() > list[j].length()) {
//				swap(i, j);
//			}
//			// ���̰� ���� �� ���� ��
//			else if (list[i].length() == list[j].length()) {
//				if (compare(i, j)) {
//					swap(i, j);
//				}
//			}
//		}
//	}
//}