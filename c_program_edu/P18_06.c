#include <stdio.h>

void P18_06_SoSimpleFunc(void)
{
	printf("I'm so simple");
}

int P18_06(void)
{
	int num = 20;
	void * ptr;

	ptr = &num;    // ���� num�� �ּ� �� ����
	printf("%p \n", ptr);

	ptr = P18_06_SoSimpleFunc;    // �Լ� SoSimpleFunc�� �ּ� �� ����
	printf("%p \n", ptr);
	return 0;
}