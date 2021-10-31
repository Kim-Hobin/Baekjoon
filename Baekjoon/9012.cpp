#include <iostream>
#include <stack>

#define endl "\n"
using namespace std;

int main()
{
	int T; cin >> T;
	stack<char> stack;
	
	while (T--) {
		string str; cin >> str;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '(') {
				stack.push(str[i]);
			}
			else {
				if (stack.empty()) {
					stack.push(str[i]);
					break;
				}
				stack.pop();
			}
		}
		if (!stack.empty()) cout << "NO" << endl;
		else cout << "YES" << endl;
		while (!stack.empty()) stack.pop();
	}

	return 0;
}