#include <stdio.h>
#define P025_002_SQUARE(X)   X*X

int P025_002(void)
{
	int num = 20;

	/* ������ ��� ��� */
	printf("Square of num: %d \n", P025_002_SQUARE(num));
	printf("Square of  -5: %d \n", P025_002_SQUARE(-5));
	printf("Square of 2.5: %g \n", P025_002_SQUARE(2.5));

	/* �������� ��� ��� */
	printf("Square of 3+2: %d \n", P025_002_SQUARE(3 + 2));
	return 0;
}
