#include <iostream>

using namespace std;

int main() {
	string str;
	cin >> str;
	int cnt[26] = { 0 };
	int max = 0;
	int count = 0;
	int idx = 0;
	char res = '?';
	bool flag = true;

	for (int i = 0; i < str.length(); i++) {
		int temp;
		if (str[i] >= 97) {
			temp = str[i] - 97;
		}
		else {
			temp = str[i] - 65;
		}
		cnt[temp]++;
		if (cnt[temp] > max) {
			flag = true;
			max = cnt[temp];
			res = temp + 65;
		}
		else if ((cnt[temp] == max) && max != 0) {
			flag = false;
		}
	}

	if (flag) {
		cout << res << endl;
	}
	else {
		cout << '?' << endl;
	}
	
	/*
	for (int i = 0; i < 26; i++) {
		cout << cnt[i] << ' ';
	}
	cout << endl;

	for (int i = 0; i < str.length(); i++) {
		for (int j = 65; j <= 90; j++) {
			if (str[i] == j) {
				cnt[j - 65]++;
			}
		}
	}

	for (int i = 0; i < str.length(); i++) {
		for (int j = 97; j <= 122; j++) {
			if (str[i] == j) {
				cnt[j - 97]++;
			}
		}
	}

	max = cnt[0];
	for (int i = 1; i < 26; i++) {
		if (max < cnt[i]) {
			max = cnt[i];
			idx = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (max == cnt[i]) {
			count++;
		}
		if (count == 2) {
			break;
		}
	}
	if (count == 2) {
		cout << '?' << endl;
	}
	else {
		cout << char(idx +65) << endl;
	}
	*/
}