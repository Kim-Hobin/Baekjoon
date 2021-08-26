#include <iostream>
#include <algorithm>

#define endl "\n"
using namespace std;

int N, K;
int cache[100 + 1][100000 + 1];

int main()
{
	int W, V;
	cin >> N >> K;
	for (int i = 1; i <= N; i++) {
		cin >> W >> V;
		for (int j = 1; j <= K; j++) {
			if (j >= W)
				cache[i][j] = max(cache[i - 1][j], cache[i - 1][j - W] + V);
			else
				cache[i][j] = cache[i - 1][j];
		}
	}

	cout << cache[N][K] << endl;

	return 0;
}