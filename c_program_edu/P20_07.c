#include <stdio.h>
#include <string.h>

void P20_07_RemoveBSN(char str[])
{
	int len = strlen(str);
	str[len - 1] = 0;
}

int P20_07(void)
{
	char str[100];
	printf("���ڿ� �Է�: ");
	fgets(str, sizeof(str), stdin);
	printf("����: %d, ����: %s \n", strlen(str), str);

	P20_07_RemoveBSN(str);
	printf("����: %d, ����: %s \n", strlen(str), str);
	return 0;
}