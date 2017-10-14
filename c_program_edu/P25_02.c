#include <stdio.h>
#define  P25_02_HIT_NUM      5

int P25_02(void)
{
#if P25_02_HIT_NUM==5
	puts("매크로 상수 HIT_NUM은 현재 5입니다.");
#else 
	puts("매크로 상수 HIT_NUM은 현재 5가 아닙니다.");
#endif 
	return 0;
}
