#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

const int MAX = 8001;
const int MIN = -4001;

int map[MAX];
int N;
int min_value = MAX, max_value = MIN;
double total;

int getMedian()
{
	int ret = 0, cnt = 0;

	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < map[i]; j++) {
			cnt++;
			if (cnt == N / 2 + 1) {
				ret = i - 4000;
			}
		}
	}

	return ret;
}

int getMode()
{
	// 제일 많이 등장하는 숫자의 횟수
	int max_cnt = 0;
	for (int i = 0; i < MAX; i++) {
		max_cnt = max(max_cnt, map[i]);
	}

	// 그 횟수만큼 등장하는 숫자는 일단 벡터로
	vector<int> v;
	for (int i = 0; i < MAX; i++) {
		if (map[i] == max_cnt) {
			v.push_back(i);
		}
	}

	// 소트
	sort(v.begin(), v.end());
	
	// 오름차순이기때문에 끝에서 바로 앞이 2번째 작은값
	if (v.size() > 1) {
		return v[1] - 4000;
	}
	else {
		return v[0] - 4000;
	}
}

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++) {
		int temp; cin >> temp;
		total += temp;
		min_value = min(min_value, temp);
		max_value = max(max_value, temp);
		map[4000 + temp]++;
	}

	// 산술평균
	cout << round(total / N) << endl;
	// 중앙값
	cout << getMedian() << endl;
	// 최빈값
	cout << getMode() << endl;
	// 범위
	cout << max_value - min_value << endl;
	
	return 0;
}