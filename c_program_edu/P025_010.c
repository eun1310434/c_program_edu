#include <stdio.h>
// #define  STNUM(Y, S, P)   YSP
// #define  STNUM(Y, S, P)   Y S P
#define  P025_010_STNUM(Y, S, P)   ((Y)*100000+(S)*1000+(P))

int P025_010(void)
{
	printf("학번: %d \n", P025_010_STNUM(10, 65, 175));
	printf("학번: %d \n", P025_010_STNUM(10, 65, 075));
	return 0;
}
