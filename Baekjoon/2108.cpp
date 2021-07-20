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
	// ���� ���� �����ϴ� ������ Ƚ��
	int max_cnt = 0;
	for (int i = 0; i < MAX; i++) {
		max_cnt = max(max_cnt, map[i]);
	}

	// �� Ƚ����ŭ �����ϴ� ���ڴ� �ϴ� ���ͷ�
	vector<int> v;
	for (int i = 0; i < MAX; i++) {
		if (map[i] == max_cnt) {
			v.push_back(i);
		}
	}

	// ��Ʈ
	sort(v.begin(), v.end());
	
	// ���������̱⶧���� ������ �ٷ� ���� 2��° ������
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

	// ������
	cout << round(total / N) << endl;
	// �߾Ӱ�
	cout << getMedian() << endl;
	// �ֺ�
	cout << getMode() << endl;
	// ����
	cout << max_value - min_value << endl;
	
	return 0;
}