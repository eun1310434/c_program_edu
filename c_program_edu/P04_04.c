#include <stdio.h>

int P04_04(void)
{
	int num1 = 15;      // 00000000 00000000 00000000 00001111
	int num2 = 20;      // 00000000 00000000 00000000 00010100
	int num3 = num1 | num2;
	printf("OR ������ ���: %d \n", num3);
	return 0;
}
