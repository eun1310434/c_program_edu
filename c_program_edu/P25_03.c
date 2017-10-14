#include <stdio.h>
#define  P25_03_ADD     1
#define  P25_03_MIN     0

int P25_03(void)
{
	int num1, num2;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

#if P25_03_ADD
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
#endif

#if P25_03_MIN
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
#endif

	return 0;
}
