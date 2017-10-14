#include <stdio.h>

void P016_003_SwapIntPtr(int **dp1, int **dp2)
{
	int *temp = *dp1;
	*dp1 = *dp2;
	*dp2 = temp;
}

int P016_003(void)
{
	int num1 = 10, num2 = 20;
	int *ptr1, *ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);

	P016_003_SwapIntPtr(&ptr1, &ptr2);
	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
	return 0;
}