#include <stdio.h>

typedef union P22_12_ubox    // ����ü ubox�� ����
{
	int mem1;
	int mem2;
	double mem3;
} P22_12_UBox;

int P22_12(void)
{
	P22_12_UBox ubx;    // 8����Ʈ �޸� �Ҵ�
	ubx.mem1 = 20;
	printf("%d \n", ubx.mem2);

	ubx.mem3 = 7.15;
	printf("%d \n", ubx.mem1);
	printf("%d \n", ubx.mem2);
	printf("%g \n", ubx.mem3);
	return 0;
}