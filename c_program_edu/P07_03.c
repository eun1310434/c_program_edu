#include <stdio.h>

int P07_03(void)
{
	int dan = 0, num = 1;
	printf("�� ��? ");
	scanf("%d", &dan);

	do
	{
		printf("%d��%d��%d \n", dan, num, dan*num);
		num++;
	} while (num<10);
	return 0;
}
