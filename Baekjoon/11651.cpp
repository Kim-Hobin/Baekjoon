#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> list(100001);
vector<pair<int, int>> sorted(100001);

void merge(int left, int mid, int right) {
	int i, j, k, l;
	i = left;
	j = mid + 1;
	k = left;

	while (i <= mid && j <= right) {
		if (list[i].second < list[j].second) {
			sorted[k++] = list[i++];
		}
		else if (list[i].second == list[j].second) {
			if (list[i].first < list[j].first) {
				sorted[k++] = list[i++];
			}
			else {
				sorted[k++] = list[j++];
			}
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

	for (l = left; l <= right; l++) {
		list[l] = sorted[l];
	}
}

void merge_sort(int left, int right) {
	int mid;

	if (left < right) {
		mid = (left + right) / 2;
		merge_sort(left, mid);
		merge_sort(mid + 1, right);
		merge(left, mid, right);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> list[i].first >> list[i].second;
	}

	merge_sort(0, N - 1);

	for (int i = 0; i < N; i++) {
		cout << list[i].first << ' ' << list[i].second << '\n';
	}

	return 0;
}