#include <stdio.h>

void P013_001_ShowArayElem(int * param, int len)
{
	int i;
	for (i = 0; i<len; i++)
		printf("%d ", param[i]);
	printf("\n");
}

int P013_01(void)
{
	int arr1[3] = { 1, 2, 3 };
	int arr2[5] = { 4, 5, 6, 7, 8 };
	P013_001_ShowArayElem(arr1, sizeof(arr1) / sizeof(int));
	P013_001_ShowArayElem(arr2, sizeof(arr2) / sizeof(int));
	return 0;
}
