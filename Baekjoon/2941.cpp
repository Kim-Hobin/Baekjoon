#include <iostream>
#include <string>
using namespace std;


int main() {
	string str;
	int cnt = 0;
	
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'c') {
			if (str[i + 1] == '=' || str[i + 1] == '-') {
				cnt++;
				i = i + 1;
				continue;
			}
		}
		else if(str[i] == 'd') {
			if (str[i + 1] == 'z') {
				if (str[i + 2] == '=') {
					cnt++;
					i = i + 2;
					continue;
				}
			}
			else if (str[i + 1] == '-') {
				cnt++;
				i = i + 1;
				continue;
			}
		}
		else if (str[i] == 'l') {
			if (str[i + 1] == 'j') {
				cnt++;
				i = i + 1;
				continue;
			}
		}
		else if (str[i] == 'n') {
			if (str[i + 1] == 'j') {
				cnt++;
				i = i + 1;
				continue;
			}
		}
		else if (str[i] == 's') {
			if (str[i + 1] == '=') {
				cnt++;
				i = i + 1;
				continue;
			}
		}
		else if (str[i] == 'z') {
			if (str[i + 1] == '=') {
				cnt++;
				i = i + 1;
				continue;
			}
		}
		cnt++;
	}
	cout << cnt << endl;
	return 0;
}