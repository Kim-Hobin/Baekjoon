#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	int err;
	string str;

	while (T--) {
		cin >> err >> str;
		str.erase(err - 1, 1);
		cout << str << endl;
	}

	return 0;
}