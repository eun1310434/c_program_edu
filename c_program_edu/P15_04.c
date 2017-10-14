#include <stdio.h>

int P15_04(void)
{
	int arr[3][2];
	int i, j;
	for (i = 0; i<3; i++)
		for (j = 0; j<2; j++)
			printf("%p \n", &arr[i][j]);
	return 0;
}
