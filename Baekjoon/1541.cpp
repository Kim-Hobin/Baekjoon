#include <iostream>
#include <string>

#define endl "\n"
using namespace std;

int main()
{
	string str;
	cin >> str;

	string num;
	bool is_minus = false;
	int result = 0;

	for (int i = 0; i <= str.length(); i++) {
		if (str[i] == '+' || str[i] == '-' || i == str.length()) {
			if (is_minus) {
				result -= stoi(num);
				num = "";
			}
			else {
				result += stoi(num);
				num = "";
			}
		}
		else {
			num += str[i];
		}

		if (str[i] == '-') {
			is_minus = true;
		}
	}

	cout << result << endl;
	
	return 0;
}