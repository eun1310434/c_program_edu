#include <stdio.h>

struct P021_007_point
{
	int xpos;
	int ypos;
};

struct P021_007_circle
{
	double radius;
	struct P021_007_point * center;
};

int P021_007(void)
{
	struct P021_007_point cen = { 2, 7 };
	double rad = 5.5;

	struct P021_007_circle ring = { rad, &cen };
	printf("원의 반지름: %g \n", ring.radius);
	printf("원의 중심 [%d, %d] \n", (ring.center)->xpos, (ring.center)->ypos);
	return 0;
}
