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
	printf("���� �Է�: ");
	scanf("%d", &(buf.iBuf));

	printf("���� 2����Ʈ: %u \n", buf.sBuf.upper);
	printf("���� 2����Ʈ: %u \n", buf.sBuf.lower);
	printf("���� 1����Ʈ �ƽ�Ű �ڵ�: %c \n", buf.bBuf[0]);
	printf("���� 1����Ʈ �ƽ�Ű �ڵ�: %c \n", buf.bBuf[3]);
	return 0;
}
