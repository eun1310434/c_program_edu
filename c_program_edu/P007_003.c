#include <stdio.h>

int P007_003(void)
{
	int dan = 0, num = 1;
	printf("¸î ´Ü? ");
	scanf("%d", &dan);

	do
	{
		printf("%d¡¿%d£½%d \n", dan, num, dan*num);
		num++;
	} while (num<10);
	return 0;
}
