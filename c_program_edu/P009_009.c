#include <stdio.h>
void P009_009_Add(int val);
int num;    // ���������� �⺻ 0���� �ʱ�ȭ��

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