#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>

using namespace std;
const int MAX = 101;

vector<int> network[MAX]; // 연결된 네트워크
int n, m; // 컴퓨터 수, 네트워크 상의 직접 연결된 컴퓨터 쌍의 수
int num1, num2; //  직접 연결된 컴퓨터 번호 쌍
bool visited[MAX]; // 방문 여부
bool flag;
queue<int> q; 

void visit(int node) {
	visited[node] = true;
	q.push(node);
}

void bfs(int cnt) {
	visit(1); // 1번 컴퓨터

	while (!q.empty()) {
		int node = q.front(); // 
		q.pop();
		for (auto i : network[node]) { // 1번 정점에서 갈 수 있는 방들, 2 5
			if (!visited[i]) {
				visit(i);
				cnt++;
			}
		}
	}
	cout << cnt << endl;
}

int main() {
	cin >> n >> m;

	for (int i = 1; i <= m; i++) {
		cin >> num1 >> num2;
		network[num1].push_back(num2);
		network[num2].push_back(num1);
	}
	
	bfs(0);
	
	return 0;
}