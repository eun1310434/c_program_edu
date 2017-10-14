#include <stdio.h>

typedef struct P22_03_point
{
	int xpos;
	int ypos;
} P22_03_Point;

P22_03_Point P22_03_AddPoint(P22_03_Point pos1, P22_03_Point pos2)
{
	P22_03_Point pos = { pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos };
	return pos;
}

P22_03_Point P22_03_MinPoint(P22_03_Point pos1, P22_03_Point pos2)
{
	P22_03_Point pos = { pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos };
	return pos;
}

int P22_03(void)
{
	P22_03_Point pos1 = { 5, 6 };
	P22_03_Point pos2 = { 2, 9 };
	P22_03_Point result;

	result = P22_03_AddPoint(pos1, pos2);
	printf("[%d, %d] \n", result.xpos, result.ypos);
	result = P22_03_MinPoint(pos1, pos2);
	printf("[%d, %d] \n", result.xpos, result.ypos);
	return 0;
}
