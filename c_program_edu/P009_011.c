#include <stdio.h>

void P009_011_SimpleFunc(void)
{
	static int num1 = 0;
	int num2 = 0;
	num1++, num2++;
	printf("static: %d, local: %d \n", num1, num2);
}

int P009_011(void)
{
	int i;
	for (i = 0; i<3; i++)
		P009_011_SimpleFunc();
	return 0;
}