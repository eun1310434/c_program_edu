#include <stdio.h>

int P09_06_SimpleFuncOne(void)
{
	int num = 10;     // ���ĺ��� SimpleFuncOne�� num ��ȿ
	num++;
	printf("SimpleFuncOne num: %d \n", num);
	return 0;     // SimpleFuncOne�� num ��ȿ�� ������ ����
}

int P09_06_SimpleFuncTwo(void)
{
	int num1 = 20;     // ���ĺ��� num1 ��ȿ
	int num2 = 30;     // ���ĺ��� num2 ��ȿ
	num1++, num2--;
	printf("num1 & num2: %d %d \n", num1, num2);
	return 0;     // num1, num2 ��ȿ�� ������ ����
}

int P09_06(void)
{
	int num = 17;     // ���ĺ��� main�� num ��ȿ
	P09_06_SimpleFuncOne();
	P09_06_SimpleFuncTwo();
	printf("main num: %d \n", num);
	return 0;     // main�� num�� ��ȿ�� ������ ����
}