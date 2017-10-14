//printf 함수를 이용한 정수의 출력과 서식문자

#include <stdio.h>

int P002_002(void)
{
	printf("Hello Everybody\n");
	printf("%d\n", 1234); // %d : 10진수 정수형태 출력, 서식문자(conversion specifier)
	printf("%d %d\n", 10, 20);
	return 0;
}