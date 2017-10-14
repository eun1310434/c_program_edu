#include <stdio.h>
// #define P25_04_ADD  1
#define P25_04_MIN  0 

int P25_04(void)
{
	int num1, num2;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

#ifdef P25_04_ADD
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
#endif

#ifdef P25_04_MIN
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
#endif

	return 0;
}
