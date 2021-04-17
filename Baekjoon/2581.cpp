#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int main() {
	int M, N; // M이상 N이하 소수들의 합과 최솟값
	cin >> M >> N;
	vector<int> v; //소수들의 집합

	for (int i = M; i <= N; i++) { // M과 N사이
		bool is_prime = true;
		for (int j = 2; j <= sqrt(i); j++) { // 2부터 자신의 제곱근까지
			if (i % j == 0) is_prime = false;
		}
		if (is_prime && i != 1) {
			v.push_back(i);
		}
	}

	int sum = 0;
	if (v.empty()) { // 소수가 하나도 없다면
		cout << -1;
	}
	else {
		for (int i = 0; i < v.size(); i++) {
			sum += v[i]; 
		}
		cout << sum << endl; // 소수들의 합
		cout << v.front() << endl; // 최솟값
	}

	return 0;
}
/*
int main() {
	int M, N; // M이상 N이하 소수들의 합과 최솟값
	cin >> M >> N;

	for (int i = M; i <= N; i++) { // M과 N사이
		bool is_prime = true;
		for (int j = 2; j <= sqrt(i); j++) { // 2부터 자신의 제곱근까지
			if (i % j == 0) is_prime = false;
		}
		if (is_prime && i != 1) {
			sum += i;
			if( min > i) {
				min = i;
			}
		}
	}

	if(sum == 0) {
		cout << -1;
	} else {
		cout << sum << endl << min;
	}

	return 0;
}*/