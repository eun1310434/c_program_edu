#include <stdio.h>

int P18_02(int argc, char *argv[])
{
	int i = 0;
	printf("���޵� ���ڿ��� ��: %d \n", argc);

	while (argv[i] != NULL)
	{
		printf("%d��° ���ڿ�: %s \n", i + 1, argv[i]);
		i++;
	}
	return 0;
}