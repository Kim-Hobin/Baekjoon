#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const int MAX = 12;
const int INF = 1000000000;
const int RINF = -1000000000;

enum Operators {
	PLUS,
	MINUS,
	MULTI,
	DIV
};

int n; // ���� ����
int arr[MAX]; // N���� �̷���� ����
int cal[4]; // ������ �迭
int maxVal = RINF, minVal = INF; // �ִ�, �ּڰ�
int temp; //�ӽð�
vector<int> stack; // ������ ���� ����, 0 ~ 4

bool check(int cur) {
	if (cal[cur]) {
		return true;
	}
	else {
		return false;
	}
}

void calc() {
	temp = arr[0];
	for (int i = 0; i < n-1; i++) {
		if (stack[i] == PLUS) {
			temp += arr[i + 1];
		}
		else if (stack[i] == MINUS) {
			temp -= arr[i + 1];
		}
		else if (stack[i] == MULTI) {
			temp *= arr[i + 1];
		}
		else if (stack[i] == DIV) {
			temp /= arr[i + 1];
		}
	}
	maxVal = max(maxVal, temp);
	minVal = min(minVal, temp);
}

void dfs() {
	if (stack.size() == n-1) {
		calc();
		return;
	}
	for (int i = PLUS; i <= DIV; i++) { 
		if (check(i)) {
			stack.push_back(i);
			cal[i]--;
			dfs();
			stack.pop_back();
			cal[i]++;
		}
	}
}

int main() {
	cin >> n; // ���� ����
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 4; i++) {
		cin >> cal[i];
	}
	dfs();
	cout << maxVal << '\n' << minVal;
}