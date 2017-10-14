#include <stdio.h>
#define  P025_005_ADD     1
#define  P025_005_MIN     0

int P025_005(void)
{
	int num1, num2;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

#if P025_005_ADD
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
#endif

#if P025_005_MIN
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
#endif

	return 0;
}
