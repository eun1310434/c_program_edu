#include <stdio.h>

typedef struct P22_11_sbox    // 구조체 sbox의 정의
{
	int mem1;
	int mem2;
	double mem3;
} P22_11_SBox;

typedef union P22_11_ubox    // 공용체 ubox의 정의
{
	int mem1;
	int mem2;
	double mem3;
} P22_11_UBox;

int P22_11(void)
{
	P22_11_SBox sbx;
	P22_11_UBox ubx;
	printf("%p %p %p \n", &sbx.mem1, &sbx.mem2, &sbx.mem3);
	printf("%p %p %p \n", &ubx.mem1, &ubx.mem2, &ubx.mem3);
	printf("%d %d \n", sizeof(P22_11_SBox), sizeof(P22_11_UBox));
	return 0;
}