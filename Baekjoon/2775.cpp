#include <iostream>
using namespace std;

int main() {
	int k, n; // k : Ãþ, n : È£
	int cnt;

	cin >> cnt;
	for (int i = 0; i < cnt; i++) {
		int room[15][14] = { 1 , 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };
		cin >> k >> n;
		for (int j = 1; j <= k; j++) {
			for (int l = 0; l < n; l++) {
				for (int m = 0; m <= l; m++) {
					room[j][l] += room[j - 1][m];
				}
			}
		}
		cout << room[k][n - 1] << endl;
	}
	return 0;
}
/*
#include <iostream>

using namespace std;

int getNum(int a, int b){
  if(b == 1)
	return 1;
  if(a == 0)
	return b;
  return (getNum(a-1, b) + getNum(a, b-1));
}

int main() {
  int T, k, n;
  cin>>T;
  for(int i=0; i<T; i++){
	cin>>k>>n;
	cout<<getNum(k, n)<<'\n';
  }
}
*/