#include <iostream>
#include <algorithm>

#define endl "\n"
#define MAX 1000 + 1
using namespace std;

string A, B;
int cache[MAX][MAX];

int main()
{
	cin >> A >> B;
	for (int i = 1; i <= A.length(); i++) {
		for (int j = 1; j <= B.length(); j++) {
			if (A[i - 1] == B[j - 1])
				cache[i][j] = cache[i - 1][j - 1] + 1;
			else
				cache[i][j] = max(cache[i - 1][j], cache[i][j - 1]);
		}
	}

	cout << cache[A.length()][B.length()] << endl;

	return 0;
}