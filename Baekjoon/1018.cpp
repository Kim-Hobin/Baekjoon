#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m = 0;
	string nm = "";
	int sum_WB = 0;
	int sum_BW = 0;
	vector <int> cnt;

	vector <string> ori_chess1 = {
		{"WBWBWBWB"},
		{"BWBWBWBW"},
		{"WBWBWBWB"},
		{"BWBWBWBW"},
		{"WBWBWBWB"},
		{"BWBWBWBW"},
		{"WBWBWBWB"},
		{"BWBWBWBW"},
	};

	vector <string> ori_chess2 = {
		{"BWBWBWBW"},
		{"WBWBWBWB"},
		{"BWBWBWBW"},
		{"WBWBWBWB"},
		{"BWBWBWBW"},
		{"WBWBWBWB"},
		{"BWBWBWBW"},
		{"WBWBWBWB"},
	};

	vector <string> input_chess = {};

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> nm;
		input_chess.push_back(nm);
	}

	for (int i = 0; i < n - 7; i++) {
		for (int j = 0; j < m - 7; j++) {
			for (int k = 0; k < 8; k++) {
				for (int l = 0; l < 8; l++) {
					if ((l+k) % 2 == 0) {
						if (input_chess[i + k][j + l] != 'W') {
							sum_WB++;
						}
					}
					else {
						if (input_chess[i + k][j + l ] != 'B') {
							sum_WB++;
						}
					}
					if ((l + k) % 2 == 0) {
						if (input_chess[i + k][j + l] != 'B') {
							sum_BW++;
						}
					}
					else {
						if (input_chess[i + k][j + l] != 'W') {
							sum_BW++;
						}
					}
				}
			}
			cnt.push_back(sum_WB);
			cnt.push_back(sum_BW);
			sum_WB = 0;
			sum_BW = 0;
		}
	}
	sort(cnt.begin(), cnt.end());
	cout << cnt.front();

	return 0;
}