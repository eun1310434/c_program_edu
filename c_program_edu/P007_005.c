#include <stdio.h>

int P007_005(void)
{
	int total = 0, num = 0;

	do
	{
		printf("���� �Է�(0 to quit): ");
		scanf("%d", &num);
		total += num;
	} while (num != 0);
	printf("�հ�: %d \n", total);
	return 0;
}