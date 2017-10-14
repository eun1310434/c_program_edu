#include <stdio.h>
int P09_04_Add(int val);
int num = 1;

int P09_04(void)
{
	int num = 5;
	printf("num: %d \n", P09_04_Add(3));
	printf("num: %d \n", num + 9);
	return 0;
}

int P09_04_Add(int val)
{
	int num = 9;
	num += val;
	return num;
}