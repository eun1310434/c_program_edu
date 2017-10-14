#include <stdio.h>

void P013_003_Swap(int * ptr1, int * ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int P013_003(void)
{
	int num1 = 10;
	int num2 = 20;
	printf("num1 num2: %d %d \n", num1, num2);

	P013_003_Swap(&num1, &num2);     // num1�� num2�� ����� ���� ���� �ٲ�� ���! 
	printf("num1 num2: %d %d \n", num1, num2);
	return 0;
}