#include <stdio.h>

int P09_09_Factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * P09_09_Factorial(n - 1);
}

int P09_09(void)
{
	printf("1! = %d \n", P09_09_Factorial(1));
	printf("2! = %d \n", P09_09_Factorial(2));
	printf("3! = %d \n", P09_09_Factorial(3));
	printf("4! = %d \n", P09_09_Factorial(4));
	printf("9! = %d \n", P09_09_Factorial(9));
	return 0;
}