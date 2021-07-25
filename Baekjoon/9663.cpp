#include <iostream>
#include <vector>
using namespace std;

int N, cnt = 0;
vector<int> stack;

bool check(int cur_x) {
	int cur_y = stack.size();
	for (int i = 0; i < stack.size(); i++) {
		int res_x = stack[i];
		int res_y = i;
		if (res_x == cur_x) {
			return false;
		}
		if (abs(res_x - cur_x) == abs(res_y - cur_y)) {
			return false;
		}
	}

	return true;
}
void dfs() {
	if (stack.size() == N) {
		cnt++;
		return;
	}
	for (int i = 1; i <= N; i++) {
		if (check(i)) {
			stack.push_back(i);
			dfs();
			stack.pop_back();
		}
	}
}

int main (){
	cin >> N;
	dfs();
	cout << cnt << endl;
}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int n, cnt;
//vector<int> stack;
//
//bool check(int cur_x) {
//	int cur_y = stack.size(); // 현재 y축 위치
//	for (int i = 0; i < stack.size(); i++) {
//		int res_x = stack[i]; // 이전 x축의 값
//		int res_y = i; // 이전 y축의 값
//		if (cur_x == res_x) {
//			return false;
//		}
//		if (abs(cur_x - res_x) == abs(cur_y - res_y)) {
//			return false;
//		}
//	}
//	return true;
//}
//
//void dfs() {
//	if (stack.size() == n) {
//		cnt++;
//		return;
//	}
//	for (int i = 1; i <= n; i++) { // i : x축의 값
//		if (check(i)) { 
//			stack.push_back(i);
//			dfs();
//			stack.pop_back();
//		}
//	}
//}
//
//int main() {
//	cin >> n;
//	dfs();
//	cout << cnt << endl;
//}
