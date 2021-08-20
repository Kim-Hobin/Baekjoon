#include <iostream>
#include <algorithm>

#define endl "\n"
using namespace std;

int N;
int cache[1000001];

void cal() 
{
	cache[1] = 0;
	for (int i = 2; i <= N; i++) {
		 cache[i] = cache[i - 1] + 1;
		 if (i % 2 == 0)
			 cache[i] = min(cache[i], cache[i / 2] + 1);
		 if (i % 3 == 0)
			 cache[i] = min(cache[i], cache[i / 3] + 1);
	}
}

int main() {
	cin >> N;

	cal();

	cout << cache[N] << endl;

	return 0;
}