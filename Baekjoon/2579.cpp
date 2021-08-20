#include <iostream>
#include <algorithm>

#define endl "\n"
#define MAX 301
using namespace std;

int N;
int score[MAX]; // 각 계단의 점수
int cache[MAX]; // 각 계단의 합의 최댓값

void cal() 
{
	cache[1] = score[1];
	cache[2] = score[1] + score[2];
	cache[3] = max(score[1] + score[3], score[2] + score[3]);
	
	for (int i = 4; i <= N; i++) {
		cache[i] = max(cache[i - 2] + score[i], cache[i - 3] + score[i - 1] + score[i]);
	}
}

int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> score[i];
	}

	cal();

	cout << cache[N] << endl;
}