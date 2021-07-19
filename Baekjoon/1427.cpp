#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool desc(int a, int b) {
	return a > b;
}

int main() {
	int N, i = 0;
	vector<int> dig;
	cin >> N;
	
	while (N) {
		dig.push_back(N % 10);
		i++;
		N /= 10;
	}
	sort(dig.begin(), dig.end(), desc);
	for (int i = 0; i < dig.size(); i++) {
		cout << dig[i];
	}

	return 0;
}