#include <iostream>

#define endl "\n"
using namespace std;

int main()
{
	unsigned char num = 0x65;
	
	cout << oct << "8���� : "<< int(num) << endl;
	cout << dec << "10���� : " << int(num) << endl;
	cout << hex << "16���� : " << int(num) << endl;

	return 0;
}