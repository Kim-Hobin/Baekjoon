#include <stdio.h>

main() {
	int i;
	int input[4], cont[4];

	printf("이진수 입력 :");
	for (int i = 0; i < 8; i++)
		scanf_s("%d", &input[i]);

	cont[0] = input[0]; //첫번째 그레이코드는 첫번째 이진수를 그대로 쓴다

	for (i = 0; i < 7; i++) {
		if (input[i] == input[i + 1]) {
			cont[i + 1] = 0; //xor계산후 같으면 0
		}
		else {
			cont[i + 1] = 1; //xor계산후 다르면 1

		}
	}
	printf("그레이코드 : ");

	for (int i = 0; i < 8; i++)
		printf("%d ", cont[i]);

	return 0;
}