#include <stdio.h>

typedef struct P22_04_point
{
	int xpos;
	int ypos;
} P22_04_Point;

void P22_04_OrgSymTrans(P22_04_Point * ptr)
{
	ptr->xpos = (ptr->xpos) * -1;
	ptr->ypos = (ptr->ypos) * -1;
}

void P22_04_ShowPosition(P22_04_Point pos)
{
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

int P22_04(void)
{
	P22_04_Point pos = { 7, -5 };
	P22_04_OrgSymTrans(&pos);
	P22_04_ShowPosition(pos);
	P22_04_OrgSymTrans(&pos);
	P22_04_ShowPosition(pos);
	return 0;
}
