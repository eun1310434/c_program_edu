#include <stdio.h>

int P023_008(void)
{
	char name[10];
	char sex;
	int age;

	FILE * fp = fopen("friend.txt", "wt"); //�ش� ������Ʈ �ȿ� ������.
	int i;

	for (i = 0; i<3; i++)
	{
		printf("�̸� ���� ���� �� �Է�: ");
		scanf("%s %c %d", name, &sex, &age);
		getchar();
		fprintf(fp, "%s %c %d", name, sex, age);
	}
	fclose(fp);
	return 0;
}