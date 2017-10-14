#include <stdio.h>
int P009_010_Add(int val);
int num = 1;

int P009_010(void)
{
	int num = 5;
	printf("num: %d \n", P009_010_Add(3));
	printf("num: %d \n", num + 9);
	return 0;
}

int P009_010_Add(int val)
{
	int num = 9;
	num += val;
	return num;
}