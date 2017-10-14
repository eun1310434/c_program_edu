#include <stdio.h>

int P018_002_WhoIsFirst(int age1, int age2, int(*cmp)(int n1, int n2))
{
	return cmp(age1, age2);
}

int P018_002_OlderFirst(int age1, int age2)
{
	if (age1>age2)
		return age1;
	else if (age1<age2)
		return age2;
	else
		return 0;
}

int P018_002_YoungerFirst(int age1, int age2)
{
	if (age1<age2)
		return age1;
	else if (age1>age2)
		return age2;
	else
		return 0;
}

int P018_002(void)
{
	int age1 = 20;
	int age2 = 30;
	int first;

	printf("������� 1 \n");
	first = P018_002_WhoIsFirst(age1, age2, P018_002_OlderFirst);
	printf("%d���� %d�� �� %d���� ���� ����! \n\n", age1, age2, first);

	printf("������� 2 \n");
	first = P018_002_WhoIsFirst(age1, age2, P018_002_YoungerFirst);
	printf("%d���� %d�� �� %d���� ���� ����! \n\n", age1, age2, first);
	return 0;
}