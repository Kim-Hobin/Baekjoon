#include <iostream>
#include <algorithm>

#define endl "\n"
#define MAX 10000 + 1
using namespace std;

int N;
int wine[MAX];
int cache[MAX];

void cal() {
	cache[0] = wine[0] = 0;
	cache[1] = wine[1];
	cache[2] = wine[1] +wine[2];
	for (int i = 3; i <= N; i++) {
		cache[i] = max(cache[i - 3] + wine[i - 1] + wine[i], max(cache[i - 2] + wine[i], cache[i - 1]));
	}
}

int main(){
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> wine[i];
	}

	cal();

	cout << cache[N] << endl;

	return 0;
}