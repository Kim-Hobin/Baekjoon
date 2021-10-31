#include <iostream>

#define endl "\n"
#define MAX 100000 + 1
using namespace std;

int s;
int stack[MAX];

void push(int x) 
{
	stack[s] = x;
	s++;
}

int pop() 
{
	if (s == 0) return -1;
	int t = stack[s - 1];
	s--;
	return t;
}

int main()
{
	int K;
	cin >> K;

	while (K--) {
		int num = 0;
		cin >> num;
		if (num == 0) {
			pop();
		}
		else {
			push(num);
		}
	}

	int sum = 0;
	for (int i = 0; i < s; i++) {
		sum += stack[i];
	}
	cout << sum << endl;

	return 0;
}