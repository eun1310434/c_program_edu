#include <stdio.h>

int P09_12_Add(int num1, int num2)     // �������� (O), ��ȯ �� (O)
{
	return num1 + num2;
}

void P09_12_ShowAddResult(int num)     // �������� (O), ��ȯ �� (X)
{
	printf("������� ���: %d \n", num);
}

int P09_12_ReadNum(void)     // �������� (X), ��ȯ �� (O)
{
	int num;
	scanf("%d", &num);
	return num;
}

void P09_12_HowToUseThisProg(void)     // �������� (X), ��ȯ �� (X)
{
	printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�. \n");
	printf("��! �׷� �� ���� ������ �Է��ϼ���. \n");
}

int P09_12(void)
{
	int result, num1, num2;
	P09_12_HowToUseThisProg();
	num1 = P09_12_ReadNum();
	num2 = P09_12_ReadNum();
	result = P09_12_Add(num1, num2);
	P09_12_ShowAddResult(result);
	return 0;
}
