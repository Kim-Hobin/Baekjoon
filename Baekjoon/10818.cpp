#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
	int n = 0;
	int num = 0;
	cin >> n;
	vector<int> v;

	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}
	int min = *min_element(v.begin(), v.end());
	int max = *max_element(v.begin(), v.end());

	cout << min << ' ' << max;
	
	return 0;
}