#include <iostream>

#define endl "\n"
using namespace std;

int N;
int wine[2002];
int cache[10001];

void cal() {
	cache[1] = wine[1];
	cache[2] = wine[1] +wine[2];
	cache[3] = wine[1] + wine[3];
	cache[4] = cache[1] + cache[2];

}

int main(){
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> wine[i];
	}

	cal();

	return 0;
}