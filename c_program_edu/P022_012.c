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
	printf("���� �Է�: ");
	scanf("%d", &(buf.iBuf));

	printf("���� 2����Ʈ: %u \n", buf.sBuf.upper);
	printf("���� 2����Ʈ: %u \n", buf.sBuf.lower);
	printf("���� 1����Ʈ �ƽ�Ű �ڵ�: %c \n", buf.bBuf[0]);
	printf("���� 1����Ʈ �ƽ�Ű �ڵ�: %c \n", buf.bBuf[3]);
	return 0;
}
