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

int n; // 수의 개수
int arr[MAX]; // N개로 이루어진 수열
int cal[4]; // 연산자 배열
int maxVal = RINF, minVal = INF; // 최댓값, 최솟값
int temp; //임시값
vector<int> stack; // 연산자 담을 스택, 0 ~ 4

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
	cin >> n; // 수의 개수
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 4; i++) {
		cin >> cal[i];
	}
	dfs();
	cout << maxVal << '\n' << minVal;
}