#include <stdio.h>

int P023_001(void)
{
	FILE * fp = fopen("data.txt", "wt");
	if (fp == NULL) {
		puts("���Ͽ��� ����!");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp);
	return 0;
}