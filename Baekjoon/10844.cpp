#include <iostream>

#define endl "\n"
#define mod 1000000000
using namespace std;

int N;
int cache[101][10];

void cal() 
{
	for (int i = 1; i < 10; i++) {
		cache[1][i] = 1;
	}

	for (int i = 2; i <= N; i++) {
		for (int j = 0; j <= 9; j++) {
			if (j == 0)
				cache[i][0] = cache[i - 1][j + 1];
			else if (j == 9)
				cache[i][9] = cache[i - 1][j - 1];
			else
				cache[i][j] = cache[i - 1][j - 1] + cache[i - 1][j + 1];
			cache[i][j] %= mod;
		}
	}
}

int main() 
{
	cin >> N;
	
	cal();
	
	int sum = 0;
	for (int i = 0; i <= 9; i++) {
		sum = (sum + cache[N][i]) % mod;
	}
	
	cout << sum << endl;

	return 0;
}