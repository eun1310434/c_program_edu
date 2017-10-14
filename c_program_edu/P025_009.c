#include <stdio.h>
#define  P025_009_STRING_JOB(A, B)     #A "의 직업은 " #B "입니다."

int P025_009(void)
{
	printf("%s \n", P025_009_STRING_JOB(이동춘, 나무꾼));
	printf("%s \n", P025_009_STRING_JOB(한상순, 사냥꾼));
	return 0;
}