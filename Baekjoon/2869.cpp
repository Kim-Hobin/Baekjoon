#include <iostream>
#include <cmath>
using namespace std;


int main() {
	double A, B, V;
	cin >> A >> B >> V;

	cout << (int)ceil((V - B) / (A - B)) << endl;
	
	return 0;
}