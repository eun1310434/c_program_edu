#include <stdio.h>

void P09_10_Recursive(int num)
{
	if (num <= 0)
		return;

	printf("Recursive call! %d \n", num);
	P09_10_Recursive(num - 1);
}

int P09_10(void)
{
	P09_10_Recursive(3);
	return 0;
}