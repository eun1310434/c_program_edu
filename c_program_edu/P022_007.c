#include <stdio.h>

typedef struct P022_007_point
{
	int xpos;
	int ypos;
} P022_007_Point;

P022_007_Point P022_007_AddPoint(P022_007_Point pos1, P022_007_Point pos2)
{
	P022_007_Point pos = { pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos };
	return pos;
}

P022_007_Point P022_007_MinPoint(P022_007_Point pos1, P022_007_Point pos2)
{
	P022_007_Point pos = { pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos };
	return pos;
}

int P022_007(void)
{
	P022_007_Point pos1 = { 5, 6 };
	P022_007_Point pos2 = { 2, 9 };
	P022_007_Point result;

	result = P022_007_AddPoint(pos1, pos2);
	printf("[%d, %d] \n", result.xpos, result.ypos);
	result = P022_007_MinPoint(pos1, pos2);
	printf("[%d, %d] \n", result.xpos, result.ypos);
	return 0;
}
