#include <iostream>

#define endl "\n"
using namespace std;

int main()
{
    int two_num;

    unsigned a = 0x80000000;
    printf("10���� :  ");
    cin >> two_num;

    //i : ���� ���� �ִ� bit�� �ε���(��ġ)
    for (int i = 0; i < 32; i++) {
        if ((a & two_num) == a)
            printf("1");
        else
            printf("0");
        a >>= 1;
    }
    
	return 0;
}