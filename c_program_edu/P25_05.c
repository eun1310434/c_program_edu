#include <stdio.h>

#define  P25_05_NAME          "홍길동"
#define  P25_05_AGE            24   
#define  P25_05_PRINT_ADDR     puts("주소: 경기도 용인시\n");

int P25_05(void)
{
	printf("이름: %s \n", P25_05_NAME);
	printf("나이: %d \n", P25_05_AGE);
	P25_05_PRINT_ADDR;
	return 0;
}
