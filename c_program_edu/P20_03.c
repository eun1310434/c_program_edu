#include <stdio.h>

void P20_03_ClearLineFromReadBuffer(void)
{
	while (getchar() != '\n');
}

int P20_03(void)
{
	char perID[7];
	char name[10];

	fputs("�ֹι�ȣ �� 6�ڸ� �Է�: ", stdout);
	fgets(perID, sizeof(perID), stdin);
	P20_03_ClearLineFromReadBuffer();     // �Է¹��� ����

	fputs("�̸� �Է�: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("�ֹι�ȣ: %s\n", perID);
	printf("�̸�: %s\n", name);
	return 0;
}
