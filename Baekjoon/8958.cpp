#include <iostream>

using namespace std;

int main() {
	int n;
	string s;
	int cnt = 0;
	int score = 0;
	cin >> n;
	 
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < s.size(); j++) {
			if (s[j] == 'O') {
				cnt++;
				score += cnt;
			}
			else {
				cnt = 0;
			}
		}
		cout << score << endl;
		cnt = 0;
		score = 0;
	}
}