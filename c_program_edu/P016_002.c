#include <stdio.h>

void P016_002_SwapIntPtr(int *p1, int *p2)
{
	int * temp = p1;
	p1 = p2;
	p2 = temp;
}

int P016_002(void)
{
	int num1 = 10, num2 = 20;
	int *ptr1, *ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);

	P016_002_SwapIntPtr(ptr1, ptr2);
	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
	return 0;
}