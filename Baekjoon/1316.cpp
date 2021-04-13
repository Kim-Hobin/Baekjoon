#include <iostream>
#include <string>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	int cnt = n;
	string str;

	for (int i = 0; i < n; i++) {
		cin >> str;
		int rpt = 0;
		bool flag[26] = { false };
		for (int i = 0; i < str.length(); i++) {
				if (rpt != str[i] && flag[str[i] - 97] == true) {
					cnt--;
					break;
				}
			flag[str[i] - 97] = true;
			rpt = str[i];
		}
	}
	cout << cnt << endl;

	return 0;
}