#include <stdio.h>

int P004_008(void)
{
	int num = -16;     // 11111111 11111111 11111111 11110000
	printf("2ĭ ������ �̵��� ���: %d \n", num >> 2);
	printf("3ĭ ������ �̵��� ���: %d \n", num >> 3);
	return 0;
}