#include <stdio.h>

#define  P025_001_NAME          "홍길동"
#define  P025_001_AGE            24   
#define  P025_001_PRINT_ADDR     puts("주소: 경기도 용인시\n");

int P025_001(void)
{
	printf("이름: %s \n", P025_001_NAME);
	printf("나이: %d \n", P025_001_AGE);
	P025_001_PRINT_ADDR;
	return 0;
}
