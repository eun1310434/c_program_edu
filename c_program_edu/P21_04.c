#include <stdio.h>

struct P21_04_point
{
	int xpos;
	int ypos;
};

int P21_04(void)
{
	struct P21_04_point arr[3];
	int i;

	for (i = 0; i<3; i++)
	{
		printf("점의 좌표 입력: ");
		scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
	}

	for (i = 0; i<3; i++)
		printf("[%d, %d] ", arr[i].xpos, arr[i].ypos);

	return 0;
}