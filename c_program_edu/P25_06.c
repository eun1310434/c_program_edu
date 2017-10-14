#include <stdio.h>
#define P25_06_SQUARE(X)   X*X

int P25_06(void)
{
	int num = 20;

	/* 정상적 결과 출력 */
	printf("Square of num: %d \n", P25_06_SQUARE(num));
	printf("Square of  -5: %d \n", P25_06_SQUARE(-5));
	printf("Square of 2.5: %g \n", P25_06_SQUARE(2.5));

	/* 비정상적 결과 출력 */
	printf("Square of 3+2: %d \n", P25_06_SQUARE(3 + 2));
	return 0;
}
