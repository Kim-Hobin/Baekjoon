#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"
#define MAX 100 + 1
using namespace std;

struct Wire
{
	int left;
	int right;
};

int N, tmp;
int cache[MAX];
Wire wire[MAX];

bool cmp(Wire a, Wire b)
{
	return a.left < b.left;
}

void cal() 
{
	sort(wire + 1, wire + N + 1, cmp);

	for (int i = 1; i <= N; i++) {
		cache[i] = 1;
		for (int j = 1; j < i; j++) {
			if (wire[i].right > wire[j].right) {
				cache[i] = max(cache[i], cache[j] + 1);
			}
		}
		tmp = max(tmp, cache[i]);
	}
}

int main()
{
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> wire[i].left >> wire[i].right;
	}
	
	cal();

	cout << N - tmp << endl;

	return 0;
}