#include <stdio.h>
void P009_009_Add(int val);
int num;    // 전역변수는 기본 0으로 초기화됨

int P009_009(void)
{
	printf("num: %d \n", num);
	P009_009_Add(3);
	printf("num: %d \n", num);
	num++;
	printf("num: %d \n", num);
	return 0;
}

void P009_009_Add(int val)
{
	num += val;
}