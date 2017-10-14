#include <stdio.h>
void P09_03_Add(int val);
int num;    // 전역변수는 기본 0으로 초기화됨

int P09_03(void)
{
	printf("num: %d \n", num);
	P09_03_Add(3);
	printf("num: %d \n", num);
	num++;
	printf("num: %d \n", num);
	return 0;
}

void P09_03_Add(int val)
{
	num += val;
}