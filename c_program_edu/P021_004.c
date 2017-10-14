#include <stdio.h>

struct P021_004_point
{
	int xpos;
	int ypos;
};

int P021_004(void)
{
	struct P021_004_point arr[3];
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