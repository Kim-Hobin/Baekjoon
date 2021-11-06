#include <iostream>
#include <stack>

#define endl "\n"
using namespace std;


int main()
{
	int n; cin >> n;
	stack<int> s;
	int last_value = 0;
	string ans;

	while (n--) {
		int input = 0;
		cin >> input;
		if (input > last_value) {
			while (input > last_value) {
				s.push(++last_value);
				ans += '+';
			}
			s.pop();
			ans += '-';
		}
		else {
			bool found = false;
			if (!s.empty()) {
				if (input == s.top()) {
					found = true;
				}
				s.pop();
				ans += '-';
			}
			if (!found) {
				cout << "NO" << endl;
				return 0;
			}
		}
	}

	for (auto x : ans) {
		cout << x << endl;
	}

	return 0;
}