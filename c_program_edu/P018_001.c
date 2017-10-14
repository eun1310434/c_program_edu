#include <stdio.h>

void P018_001_SimpleAdder(int n1, int n2)
{
	printf("%d + %d = %d \n", n1, n2, n1 + n2);
}

void P018_001_ShowString(char * str)
{
	printf("%s \n", str);
}

int P018_001(void)
{
	char * str = "Function Pointer";
	int num1 = 10, num2 = 20;

	void(*fptr1)(int, int) = P018_001_SimpleAdder;
	void(*fptr2)(char *) = P018_001_ShowString;

	/* 함수 포인터 변수에 의한 호출 */
	fptr1(num1, num2);
	fptr2(str);
	return 0;
}