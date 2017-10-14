#include <stdio.h>

int P023_008(void)
{
	char name[10];
	char sex;
	int age;

	FILE * fp = fopen("friend.txt", "wt"); //해당 프로젝트 안에 생성됨.
	int i;

	for (i = 0; i<3; i++)
	{
		printf("이름 성별 나이 순 입력: ");
		scanf("%s %c %d", name, &sex, &age);
		getchar();
		fprintf(fp, "%s %c %d", name, sex, age);
	}
	fclose(fp);
	return 0;
}