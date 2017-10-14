#include <stdio.h>
#define  P025_008_HIT_NUM      7

int P025_008(void)
{
#if P025_008_HIT_NUM==5
	puts("매크로 상수 HIT_NUM은 현재 5입니다.");
#elif P025_008_HIT_NUM==6
	puts("매크로 상수 HIT_NUM은 현재 6입니다.");
#elif P025_008_HIT_NUM==7
	puts("매크로 상수 HIT_NUM은 현재 7입니다.");
#else
	puts("매크로 상수 HIT_NUM은 5, 6, 7은 확실히 아닙니다.");
#endif 

	return 0;
}
