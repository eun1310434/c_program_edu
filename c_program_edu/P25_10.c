#include <stdio.h>
// #define  STNUM(Y, S, P)   YSP
// #define  STNUM(Y, S, P)   Y S P
#define  P25_10_STNUM(Y, S, P)   ((Y)*100000+(S)*1000+(P))

int P25_10(void)
{
	printf("�й�: %d \n", P25_10_STNUM(10, 65, 175));
	printf("�й�: %d \n", P25_10_STNUM(10, 65, 075));
	return 0;
}
