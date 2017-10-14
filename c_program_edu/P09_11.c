#include <stdio.h>

int P09_11_Add(int num1, int num2)
{
	return num1 + num2;
}

int P09_11(void)
{
	int result;
	result = P09_11_Add(3, 4);
	printf("µ¡¼À°á°ú1: %d \n", result);
	result = P09_11_Add(5, 8);
	printf("µ¡¼À°á°ú2: %d \n", result);
	return 0;
}
