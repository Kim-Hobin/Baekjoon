#include <iostream>
#include <stack>
#include <string>

#define endl "\n"
#define MAX 100 + 1
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	while (1) {
		string str;
		stack<char> bracket;
		getline(cin, str);
		bool check = true;
		if (str.length() == 1 && str[0] == '.') break;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(' || str[i] == '[') {
				bracket.push(str[i]);
			}
			if (str[i] == ')') {
				if (bracket.empty() || bracket.top() == '[') {
					check = false;
					break;
				}
				else bracket.pop();
			}
			if (str[i] == ']') {
				if (bracket.empty() || bracket.top() == '(') {
					check = false;
					break;
				}
				else bracket.pop();
			}
		}
		if (bracket.empty() && check) cout << "yes" << endl;
		else cout << "no" << endl;
	}

	return 0;
}