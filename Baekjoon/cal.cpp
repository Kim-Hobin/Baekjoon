#include <iostream>

#define endl "\n"
using namespace std;

int main()
{
    int two_num;

    unsigned a = 0x80000000;
    printf("10진수 :  ");
    cin >> two_num;

    //i : 현재 내가 있는 bit의 인덱스(위치)
    for (int i = 0; i < 32; i++) {
        if ((a & two_num) == a)
            printf("1");
        else
            printf("0");
        a >>= 1;
    }
    
	return 0;
}