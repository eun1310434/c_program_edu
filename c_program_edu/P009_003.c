#include <stdio.h>

int P009_003_Add(int num1, int num2)     // �������� (O), ��ȯ �� (O)
{
	return num1 + num2;
}

void P009_003_ShowAddResult(int num)     // �������� (O), ��ȯ �� (X)
{
	printf("������� ���: %d \n", num);
}

int P009_003_ReadNum(void)     // �������� (X), ��ȯ �� (O)
{
	int num;
	scanf("%d", &num);
	return num;
}

void P009_003_HowToUseThisProg(void)     // �������� (X), ��ȯ �� (X)
{
	printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�. \n");
	printf("��! �׷� �� ���� ������ �Է��ϼ���. \n");
}

int P009_003(void)
{
	int result, num1, num2;
	P009_003_HowToUseThisProg();
	num1 = P009_003_ReadNum();
	num2 = P009_003_ReadNum();
	result = P009_003_Add(num1, num2);
	P009_003_ShowAddResult(result);
	return 0;
}
