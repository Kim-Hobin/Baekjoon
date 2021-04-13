#include <iostream>
using namespace std;

int main() {
	int cnt;
	string str;
	int rpt;
	cin >> cnt;

	
	for (int i = 0; i < cnt; i++) {
		cin >> rpt;
		cin >> str;
		for (int j = 0; j < str.length(); j++) {
			for (int k = 0; k < rpt; k++) {
				cout << str[j];
			}
		}
		cout << endl;
	}
	
	cout << endl;


}