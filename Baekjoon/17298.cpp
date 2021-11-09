#include <iostream>
#include <stack>
#include <vector>

#define endl "\n"
#define MAX 1000000 + 1
using namespace std;

int seq[MAX], ans[MAX];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N; cin >> N;
	stack<int> stack;

	for (int i = 0; i < N; i++) {
		cin >> seq[i];
	}

	for (int i = N - 1; i >= 0; i--) {
		while (!stack.empty() && stack.top() <= seq[i]) {
			stack.pop();
		}

		if (stack.empty()) ans[i] = -1;
		else ans[i] = stack.top();

		stack.push(seq[i]);
	}
	
	for (int i = 0; i < N; i++) {
		cout << ans[i] << ' ';
	}

	return 0;
}