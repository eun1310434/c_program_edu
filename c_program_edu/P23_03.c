#include <stdio.h>

int P23_03(void)
{
	char name[10];
	char sex;
	int age;

	FILE * fp = fopen("friend.txt", "wt");
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