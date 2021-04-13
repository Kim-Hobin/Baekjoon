//#include <iostream>
//
//using namespace std;
//const int N = 104;
//
//int main() {
//	char str[N]; 
//	cin >> str;
//	int idx[26] = { 0};
//
//	for (int i = 0; i < 26; i++) {
//		idx[i] = -1;
//	}
//
//	for (int j = 0; j < N; j++) {
//		//cout << str[j] << endl;
//		int index = str[j] - 97;
//		if (idx[index] == -1) {
//			idx[index] = j;
//		}
//	}
//
//	for (int i = 0; i < 26; i++) {
//		cout << idx[i] << ' ';
//	}
//
//	return 0;
//}

#include <iostream>

using namespace std;
/*
97 122
*/
int main() {
	string str; /* 단어 길이 */
	cin >> str;

	for (int i = 97; i <= 122; i++) {
		int temp = -1;
		for (int j = 0; j < str.length(); j++) {
			if (str[j] == i) {
				temp = j;
				break;
			}
		}
		cout << temp << ' ';
	}

	return 0;
}