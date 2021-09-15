#include <iostream>

#define endl "\n"
#define MINUS -1
#define MAX 10000 + 1

using namespace std;

int s; // stack size;
int a[MAX];

void push(int x) 
{
	a[s] = x;
	s++;
}

int pop() 
{
	if (s == 0) return -1;
	int t = a[s - 1];
	s--;
	return t;
}

int size() 
{
	return s;
}

int top() 
{
	if (s == 0) return -1;
	return a[s - 1];
}

int empty()
{
	if (s == 0) return 1;
	else return 0;
}

int main()
{
	int n;
	cin >> n;
	while (n--) {
		string str;
		cin >> str;
		if (str == "push") {
			int n;
			cin >> n;
			push(n);
		}
		if (str == "pop") {
			cout << pop() << '\n';
		}
		if (str == "top") {
			cout << top() << '\n';
		}
		if (str == "size") {
			cout << size() << '\n';
		}
		if (str == "empty") {
			cout << empty() << '\n';
		}
	}
}