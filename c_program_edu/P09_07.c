#include <stdio.h>
int P09_07_NumberCompare(int num1, int num2);

int P09_07(void)
{
	printf("3과 4중에서 큰 수는 %d 이다. \n", P09_07_NumberCompare(3, 4));
	printf("7과 2중에서 큰 수는 %d 이다. \n", P09_07_NumberCompare(7, 2));
	return 0;
}

int P09_07_NumberCompare(int num1, int num2)
{
	if (num1>num2)
		return num1;
	else
		return num2;
}