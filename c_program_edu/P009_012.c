#include <stdio.h>

void P009_012_Recursive(int num)
{
	if (num <= 0)
		return;

	printf("Recursive call! %d \n", num);
	P009_012_Recursive(num - 1);
}

int P009_012(void)
{
	P009_012_Recursive(3);
	return 0;
}