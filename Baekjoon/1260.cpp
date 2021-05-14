#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>

using namespace std;
const int MAX = 1001;

vector<int> list[MAX]; // 해당 인덱스와 인덱스에서 갈수 있는 접점들
int n, m, v; // 1~ 1000, 1~10000, 탐색번호
int num1, num2;
bool visited[MAX];
bool flag;
queue<int> q;

void visit(int node) {
	cout << node << ' ';
	visited[node] = true;
	q.push(node);
}

void bfs() {
	visit(v);

	while (!q.empty()) {
		int node = q.front();
		q.pop();
		for (auto i : list[node]) { // 1번 정점에서 갈 수 있는 방들
			if (!visited[i]) {
				visit(i);
			}
		}
	}
}

void dfs(int node, int cnt) {
	if (cnt == n) {
		cout << "REturn\n";
		flag = true;
		return;
	}

	//for (int i = 0; i < list[node].size(); i++) { // i : 인덱스
		//int nextNode = list[node][i]; // 현재노드에서 다음 방문할노드 2,3,4
		//if (!visited[nextNode]) { // 다음 방문할 노드가 false라면
		//	visited[nextNode] = true; // 방문표시
		//	cout << nextNode << ' ';
		//	dfs(nextNode, cnt+1);
		//	if (flag) {
		//		return;
		//	}
		//	visited[nextNode] = false;
		//	
		//}
	//}

	for (auto i : list[node]) {
		if (!visited[i]) {
			visited[i] = true;
			cout << i << ' ';
			dfs(i, cnt + 1);
			if (flag) {
				return;
			}
			//visited[i] = false;
		}
	}
} 
int main() {
	cin >> n >> m >> v;
	for (int i = 1; i <= m; i++) {
		cin >> num1 >> num2;
		list[num1].push_back(num2);
		list[num2].push_back(num1);
	}
	for (int i = 1; i <= n; i++) {
		sort(list[i].begin(), list[i].end());
	}

	cout << v << ' ';
	visited[v] = true;

	dfs(v,1);
	cout << endl;

	memset(visited, false, sizeof(visited));
	bfs();

	return 0;
}