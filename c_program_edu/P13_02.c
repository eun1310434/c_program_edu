#include <stdio.h>

void P13_02_ShowArayElem(int * param, int len)
{
	int i;
	for (i = 0; i<len; i++)
		printf("%d ", param[i]);
	printf("\n");
}

void P13_02_AddArayElem(int * param, int len, int add)
{
	int i;
	for (i = 0; i<len; i++)
		param[i] += add;
}

int P13_02(void)
{
	int arr[3] = { 1, 2, 3 };
	P13_02_AddArayElem(arr, sizeof(arr) / sizeof(int), 1);
	P13_02_ShowArayElem(arr, sizeof(arr) / sizeof(int));

	P13_02_AddArayElem(arr, sizeof(arr) / sizeof(int), 2);
	P13_02_ShowArayElem(arr, sizeof(arr) / sizeof(int));

	P13_02_AddArayElem(arr, sizeof(arr) / sizeof(int), 3);
	P13_02_ShowArayElem(arr, sizeof(arr) / sizeof(int));
	return 0;
}
