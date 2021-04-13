
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n = 0;
	int a = 0;
	int b = 0;
	cin >> n;
	int c = 0;
	double* score = new double[1010];

	for (int i = 0; i < n; i++) {
		cin >> b;
		score[i] = b;
		a < b ? a = b : a;
	}

	for (int i = 0; i < n; i++) {
		score[i] = (score[i] * 100) / a;
	}


	double average = 0;
	
	for (int i = 0; i < n; i++) {
		average += score[i];
	}
	average /= n;

	cout << average << endl;

}


#include <ios>
main() {
	int M = 0, n; 
	float a = 0.0, x;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) { 
		scanf("%f", &x); 
		a += x; 
		if (x > M) { 
			M = x;
		} }
	a /= n;
	printf("%f", 100 * a / M);
}