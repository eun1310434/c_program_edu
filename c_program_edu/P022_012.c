#include <stdio.h>

typedef struct P022_012_dbshort
{
	unsigned short upper;
	unsigned short lower;
} P022_012_DBShort;

typedef union P022_012_rdbuf
{
	int iBuf;
	char bBuf[4];
	P022_012_DBShort sBuf;
} P022_012_RDBuf;

int P022_012(void)
{
	P022_012_RDBuf buf;
	printf("정수 입력: ");
	scanf("%d", &(buf.iBuf));

	printf("상위 2바이트: %u \n", buf.sBuf.upper);
	printf("하위 2바이트: %u \n", buf.sBuf.lower);
	printf("상위 1바이트 아스키 코드: %c \n", buf.bBuf[0]);
	printf("하위 1바이트 아스키 코드: %c \n", buf.bBuf[3]);
	return 0;
}
