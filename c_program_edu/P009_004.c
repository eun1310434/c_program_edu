#include <stdio.h>
int P009_004_NumberCompare(int num1, int num2);

int P009_004(void)
{
	printf("3�� 4�߿��� ū ���� %d �̴�. \n", P009_004_NumberCompare(3, 4));
	printf("7�� 2�߿��� ū ���� %d �̴�. \n", P009_004_NumberCompare(7, 2));
	return 0;
}

int P009_004_NumberCompare(int num1, int num2)
{
	if (num1>num2)
		return num1;
	else
		return num2;
}