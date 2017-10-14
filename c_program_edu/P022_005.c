#include <stdio.h>

typedef struct P022_005_point
{
	int xpos;
	int ypos;
} P022_005_Point;

void P022_005_OrgSymTrans(P022_005_Point * ptr)
{
	ptr->xpos = (ptr->xpos) * -1;
	ptr->ypos = (ptr->ypos) * -1;
}

void P022_005_ShowPosition(P022_005_Point pos)
{
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

int P022_005(void)
{
	P022_005_Point pos = { 7, -5 };
	P022_005_OrgSymTrans(&pos);
	P022_005_ShowPosition(pos);
	P022_005_OrgSymTrans(&pos);
	P022_005_ShowPosition(pos);
	return 0;
}
