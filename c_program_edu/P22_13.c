#include <stdio.h>

typedef struct P22_13_dbshort
{
	unsigned short upper;
	unsigned short lower;
} P22_13_DBShort;

typedef union P22_13_rdbuf
{
	int iBuf;
	char bBuf[4];
	P22_13_DBShort sBuf;
} P22_13_RDBuf;

int P22_13(void)
{
	P22_13_RDBuf buf;
	printf("정수 입력: ");
	scanf("%d", &(buf.iBuf));

	printf("상위 2바이트: %u \n", buf.sBuf.upper);
	printf("하위 2바이트: %u \n", buf.sBuf.lower);
	printf("상위 1바이트 아스키 코드: %c \n", buf.bBuf[0]);
	printf("하위 1바이트 아스키 코드: %c \n", buf.bBuf[3]);
	return 0;
}
