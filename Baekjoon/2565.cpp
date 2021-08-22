#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"
#define MAX 500 + 1
using namespace std;

struct Wire
{
	int left;
	int right;
};

int N;
int cache[MAX];
Wire wire[MAX];

void cal() {
	for (int i = 0; i < N; i++) {
		cache[i] = 1;
		for (int j = 0; j <= i; j++) {
			
		}
	}
}

int main()
{
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> wire[i].left >> wire[i].right;
	}
	
	sort(wire.begin(), wire.end()); // wire.first 기준 정렬

	cal();


	return 0;
}