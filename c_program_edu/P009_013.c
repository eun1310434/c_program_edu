#include <stdio.h>

int P009_013_Factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * P009_013_Factorial(n - 1);
}

int P009_013(void)
{
	printf("1! = %d \n", P009_013_Factorial(1));
	printf("2! = %d \n", P009_013_Factorial(2));
	printf("3! = %d \n", P009_013_Factorial(3));
	printf("4! = %d \n", P009_013_Factorial(4));
	printf("9! = %d \n", P009_013_Factorial(9));
	return 0;
}