#include <stdio.h>

void P18_04_SimpleAdder(int n1, int n2)
{
	printf("%d + %d = %d \n", n1, n2, n1 + n2);
}

void P18_04_ShowString(char * str)
{
	printf("%s \n", str);
}

int P18_04(void)
{
	char * str = "Function Pointer";
	int num1 = 10, num2 = 20;

	void(*fptr1)(int, int) = P18_04_SimpleAdder;
	void(*fptr2)(char *) = P18_04_ShowString;

	/* �Լ� ������ ������ ���� ȣ�� */
	fptr1(num1, num2);
	fptr2(str);
	return 0;
}