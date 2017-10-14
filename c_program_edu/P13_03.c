#include <stdio.h>

void P13_03_Swap(int * ptr1, int * ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int P13_03(void)
{
	int num1 = 10;
	int num2 = 20;
	printf("num1 num2: %d %d \n", num1, num2);

	P13_03_Swap(&num1, &num2);     // num1과 num2에 저장된 값이 서로 바뀌길 기대! 
	printf("num1 num2: %d %d \n", num1, num2);
	return 0;
}