#include <stdio.h>

void P013_002_ShowArayElem(int * param, int len)
{
	int i;
	for (i = 0; i<len; i++)
		printf("%d ", param[i]);
	printf("\n");
}

void P013_002_AddArayElem(int * param, int len, int add)
{
	int i;
	for (i = 0; i<len; i++)
		param[i] += add;
}

int P013_002(void)
{
	int arr[3] = { 1, 2, 3 };
	P013_002_AddArayElem(arr, sizeof(arr) / sizeof(int), 1);
	P013_002_ShowArayElem(arr, sizeof(arr) / sizeof(int));

	P013_002_AddArayElem(arr, sizeof(arr) / sizeof(int), 2);
	P013_002_ShowArayElem(arr, sizeof(arr) / sizeof(int));

	P013_002_AddArayElem(arr, sizeof(arr) / sizeof(int), 3);
	P013_002_ShowArayElem(arr, sizeof(arr) / sizeof(int));
	return 0;
}
