#include <stdio.h>

int P08_11(void)
{
	int sum = 0, num = 0;

	while (1)
	{
		sum += num;
		if (sum>5000)
			break;
		num++;
	}

	printf("sum: %d \n", sum);
	printf("num: %d \n", num);
	return 0;
}
