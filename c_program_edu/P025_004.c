#include <stdio.h>
#define  P025_004_DIFF_ABS(X, Y)     ( (X)>(Y) ? (X)-(Y) : (Y)-(X) )

int P025_004(void)
{
	printf("�� ���� ��: %d \n", P025_004_DIFF_ABS(5, 7));
	printf("�� ���� ��: %g \n", P025_004_DIFF_ABS(1.8, -1.4));
	return 0;
}
