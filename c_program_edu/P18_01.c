#include <stdio.h>

int P18_01(int argc, char *argv[])
{
	int i = 0;
	printf("���޵� ���ڿ��� ��: %d \n", argc);

	for (i = 0; i<argc; i++)
		printf("%d��° ���ڿ�: %s \n", i + 1, argv[i]);
	return 0;
}