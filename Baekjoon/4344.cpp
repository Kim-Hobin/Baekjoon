#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main() {
	int n = 0;
	int num = 0;
	double score = 0;
	int a = 0;
	double avg = 0;
	vector <int> v;
	cin >> n;
	cout << fixed;
	cout.precision(3);

	for (int i = 0; i < n; i++) {
		cin >> num;
		for (int j = 0; j < num; j++) {
			cin >> a;
			score += a;
			v.push_back(a);
		}
		score /= num;
		for (int j = 0; j < v.size(); j++) {
			if (v[j] > score) {
				avg++;
			}
			
		}
		cout << round(((double)avg / (double)num)*100000)/1000 << "%" << endl;
		score = 0;
		avg = 0;
		v.clear();
	}
}