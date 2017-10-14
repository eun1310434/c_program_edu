#include <stdio.h>
// #define P025_006_ADD  1
#define P025_006_MIN  0 

int P025_006(void)
{
	int num1, num2;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

#ifdef P025_006_ADD
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
#endif

#ifdef P025_006_MIN
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
#endif

	return 0;
}
