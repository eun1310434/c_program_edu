#include <stdio.h>

typedef struct P22_09_point
{
	int xpos;
	int ypos;
} P22_09_Point;

void P22_09_ShowPosition(P22_09_Point pos)
{
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

P22_09_Point P22_09_GetCurrentPosition(void)
{
	P22_09_Point cen;
	printf("Input current pos: ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}

int P22_09(void)
{
	P22_09_Point curPos = P22_09_GetCurrentPosition();
	P22_09_ShowPosition(curPos);
	return 0;
}
