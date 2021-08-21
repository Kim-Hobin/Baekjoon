#include <iostream>
#include <algorithm>

#define endl "\n"
#define MAX 1000 + 1
using namespace std;

int N, sum;
int cache[MAX], seq[MAX];

void cal() 
{
	for (int i = 1; i <= N; i++) {
		cache[i] = 1;

		for (int j = 1; j <= i; j++) {
			if (seq[i] > seq[j]) {
				cache[i] = max(cache[i], cache[j] + 1);
 			}
		}
		sum = max(sum, cache[i]);
	}
}

int main()
{
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> seq[i];
	}

	cal();
	
	cout << sum << endl;

	return 0;
}