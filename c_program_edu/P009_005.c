#include <stdio.h>
int P009_005_AbsoCompare(int num1, int num2);  // ���밪�� ū ���� ��ȯ 
int P009_005_GetAbsoValue(int num);   // ���������� ���밪�� ��ȯ

int P009_005(void)
{
	int num1, num2;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);
	printf("%d�� %d�� ���밪�� ū ����: %d \n",
		num1, num2, P009_005_AbsoCompare(num1, num2));
	return 0;
}

int P009_005_AbsoCompare(int num1, int num2)
{
	if (P009_005_GetAbsoValue(num1) > P009_005_GetAbsoValue(num2))
		return num1;
	else
		return num2;
}

int P009_005_GetAbsoValue(int num)
{
	if (num<0)
		return num * (-1);
	else
		return num;
}
