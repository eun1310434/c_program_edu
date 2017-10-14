#include <stdio.h>

typedef struct P022_010_sbox    // 구조체 sbox의 정의
{
	int mem1;
	int mem2;
	double mem3;
} P022_010_SBox;

typedef union P022_010_ubox    // 공용체 ubox의 정의
{
	int mem1;
	int mem2;
	double mem3;
} P022_010_UBox;

int P022_010(void)
{
	P022_010_SBox sbx;
	P022_010_UBox ubx;
	printf("%p %p %p \n", &sbx.mem1, &sbx.mem2, &sbx.mem3);
	printf("%p %p %p \n", &ubx.mem1, &ubx.mem2, &ubx.mem3);
	printf("%d %d \n", sizeof(P022_010_SBox), sizeof(P022_010_UBox));
	return 0;
}