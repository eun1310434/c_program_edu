#include <stdio.h>

void P018_003_SoSimpleFunc(void)
{
	printf("I'm so simple");
}

int P018_003(void)
{
	int num = 20;
	void * ptr;

	ptr = &num;    // ���� num�� �ּ� �� ����
	printf("%p \n", ptr);

	ptr = P018_003_SoSimpleFunc;    // �Լ� SoSimpleFunc�� �ּ� �� ����
	printf("%p \n", ptr);
	return 0;
}