#include <stdio.h>

int P20_06(void)
{
	int ch1, ch2;
	scanf("%c", &ch1);

	ch1 = getchar();     // ���� �Է�
	ch2 = fgetc(stdin);   // ���� Ű �Է�

	putchar(ch1);     // ���� ���
	fputc(ch2, stdout); // ���� Ű ���	
	return 0;
}