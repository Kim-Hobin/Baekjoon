#include <iostream>
#include <tuple>
using namespace std;

//struct Info {
//	string name;
//	string birthday;
//};

pair <string, int> info[101];

int main() {
	/*struct Info Student[101];*/
	int n, i = 1;
	string day, month, year, birth;

	cin >> n;
	while (n--) {
		cin >> info[i].first >> day >> month >> year;

		birth = year + month + day;
		info[i].second = birth - '0';
	}



	return 0;
}