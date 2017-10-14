#include <stdio.h>

typedef struct P022_003_point
{
	int xpos;
	int ypos;
} P022_003_Point;

void P022_003_ShowPosition(P022_003_Point pos)
{
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

P022_003_Point P022_003_GetCurrentPosition(void)
{
	P022_003_Point cen;
	printf("Input current pos: ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}

int P022_003(void)
{
	P022_003_Point curPos = P022_003_GetCurrentPosition();
	P022_003_ShowPosition(curPos);
	return 0;
}
