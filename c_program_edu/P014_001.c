#include <stdio.h>

void P014_001_BubbleSort(int ary[], int len);

int P014_001(void)
{
	int arr[4] = { 3, 2, 1, 4 };
	int i;

	P014_001_BubbleSort(arr, sizeof(arr) / sizeof(int));
	for (i = 0; i<4; i++)
		printf("%d ", arr[i]);

	printf("\n");
	return 0;
}

void P014_001_BubbleSort(int ary[], int len)
{
	int i, j;
	int temp;

	for (i = 0; i<len - 1;i++)
	{
		for (j = 0; j<(len - i) - 1; j++)
		{
			if (ary[j]<ary[j + 1])
			{
				temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
		}
	}
}
