#include <stdio.h>

#define  P025_001_NAME          "ȫ�浿"
#define  P025_001_AGE            24   
#define  P025_001_PRINT_ADDR     puts("�ּ�: ��⵵ ���ν�\n");

int P025_001(void)
{
	printf("�̸�: %s \n", P025_001_NAME);
	printf("����: %d \n", P025_001_AGE);
	P025_001_PRINT_ADDR;
	return 0;
}
