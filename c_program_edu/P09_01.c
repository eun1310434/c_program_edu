#include <stdio.h>
int P09_01_AbsoCompare(int num1, int num2);  // ���밪�� ū ���� ��ȯ 
int P09_01_GetAbsoValue(int num);   // ���������� ���밪�� ��ȯ

int P09_01(void)
{
	int num1, num2;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);
	printf("%d�� %d�� ���밪�� ū ����: %d \n",
		num1, num2, P09_01_AbsoCompare(num1, num2));
	return 0;
}

int P09_01_AbsoCompare(int num1, int num2)
{
	if (P09_01_GetAbsoValue(num1) > P09_01_GetAbsoValue(num2))
		return num1;
	else
		return num2;
}

int P09_01_GetAbsoValue(int num)
{
	if (num<0)
		return num * (-1);
	else
		return num;
}
