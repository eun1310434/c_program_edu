#include <stdio.h>

void P018_003_SoSimpleFunc(void)
{
	printf("I'm so simple");
}

int P018_003(void)
{
	int num = 20;
	void * ptr;

	ptr = &num;    // 변수 num의 주소 값 저장
	printf("%p \n", ptr);

	ptr = P018_003_SoSimpleFunc;    // 함수 SoSimpleFunc의 주소 값 저장
	printf("%p \n", ptr);
	return 0;
}