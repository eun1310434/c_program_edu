#include <stdio.h>
#define  P025_007_HIT_NUM      5

int P025_007(void)
{
#if P025_007_HIT_NUM==5
	puts("매크로 상수 HIT_NUM은 현재 5입니다.");
#else 
	puts("매크로 상수 HIT_NUM은 현재 5가 아닙니다.");
#endif 
	return 0;
}
