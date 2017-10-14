#include <stdio.h>

typedef struct P22_01_point
{
	int xpos;
	int ypos;
} P22_01_Point;

typedef struct P22_01_circle
{
	P22_01_Point cen;
	double rad;
} P22_01_Circle;

void P22_01_ShowCircleInfo(P22_01_Circle * cptr)
{
	printf("[%d, %d] \n", (cptr->cen).xpos, (cptr->cen).ypos);
	printf("radius: %g \n\n", cptr->rad);
}

int P22_01(void)
{
	P22_01_Circle c1 = { { 1 }, 3.5 };
	P22_01_Circle c2 = { 2, 4, 3.9 };
	P22_01_ShowCircleInfo(&c1);
	P22_01_ShowCircleInfo(&c2);
	return 0;
}
