#include <stdio.h>

typedef union P022_011_ubox    // ����ü ubox�� ����
{
	int mem1;
	int mem2;
	double mem3;
} P022_011_UBox;

int P022_011(void)
{
	P022_011_UBox ubx;    // 8����Ʈ �޸� �Ҵ�
	ubx.mem1 = 20;
	printf("%d \n", ubx.mem2);

	ubx.mem3 = 7.15;
	printf("%d \n", ubx.mem1);
	printf("%d \n", ubx.mem2);
	printf("%g \n", ubx.mem3);
	return 0;
}