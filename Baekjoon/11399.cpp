#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> time(N);
	for (int i = 0; i < N; i++) {
		cin >> time[i];
	}

	sort(time.begin(), time.end());

	int tmp = 0, sum = 0;
	for (int i = 0; i < N; i++) {
		tmp += time[i];
		sum += tmp;
	}
	
	cout << sum << endl;

	return 0;
}