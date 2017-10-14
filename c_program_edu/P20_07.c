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
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	printf("길이: %d, 내용: %s \n", strlen(str), str);

	P20_07_RemoveBSN(str);
	printf("길이: %d, 내용: %s \n", strlen(str), str);
	return 0;
}