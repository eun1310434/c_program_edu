#include <stdio.h>

int P08_05(void)
{
	int num;
	printf("start! ");

	for (num = 0; num<20; num++)
	{
		if (num % 2 == 0 || num % 3 == 0)
			continue;
		printf("%d ", num);
	}
	printf("end! \n");
	return 0;
}