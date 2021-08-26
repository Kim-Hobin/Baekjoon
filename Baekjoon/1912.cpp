#include <iostream>
#include <algorithm>

#define endl "\n"
#define MAX 100000 + 1
using namespace std;

int N;
int seq[MAX];
int cache[MAX];

int main()
{
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> seq[i];
		cache[i] = seq[i];
	}

	int max_sum = cache[1];
	for (int i = 1; i <= N; i++) {
		cache[i] = max(cache[i], cache[i - 1] + seq[i]);
		if (cache[i] > max_sum) {
			max_sum = cache[i];
		}
	}
	
	cout << max_sum << endl;

	return 0;
}