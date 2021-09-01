#include <iostream>
#include <algorithm>

#define endl "\n"
#define MAX 1000 + 1
#define INF 10000000 + 1
using namespace std;

long ans;


void cal()
{
	int p_min = INF;
	for (int i = 1; i < N; i++) {
		p_min = min(p_min, P[i]);
		ans += p_min * D[i];
	}
}

void input()
{
	for (int i = 1; i < N; i++)
		cin >> D[i];
	for (int i = 1; i <= N; i++)
		cin >> P[i];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	int D[N], P[N];

	input();

	cal();

	cout << ans << endl;

	return 0;
}