#include <stdio.h>

typedef struct P022_009_point
{
	int xpos;
	int ypos;
} P022_009_Point;

typedef struct P022_009_circle
{
	P022_009_Point cen;
	double rad;
} P022_009_Circle;

void P022_009_ShowCircleInfo(P022_009_Circle * cptr)
{
	printf("[%d, %d] \n", (cptr->cen).xpos, (cptr->cen).ypos);
	printf("radius: %g \n\n", cptr->rad);
}

int P022_009(void)
{
	P022_009_Circle c1 = { { 1 }, 3.5 };
	P022_009_Circle c2 = { 2, 4, 3.9 };
	P022_009_ShowCircleInfo(&c1);
	P022_009_ShowCircleInfo(&c2);
	return 0;
}
