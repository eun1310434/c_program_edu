#include <stdio.h>
#define  P25_07_DIFF_ABS(X, Y)     ( (X)>(Y) ? (X)-(Y) : (Y)-(X) )

int P25_07(void)
{
	printf("�� ���� ��: %d \n", P25_07_DIFF_ABS(5, 7));
	printf("�� ���� ��: %g \n", P25_07_DIFF_ABS(1.8, -1.4));
	return 0;
}
