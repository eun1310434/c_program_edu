#include <stdio.h>

struct P21_06_point
{
	int xpos;
	int ypos;
};

struct P21_06_circle
{
	double radius;
	struct P21_06_point * center;
};

int P21_06(void)
{
	struct P21_06_point cen = { 2, 7 };
	double rad = 5.5;

	struct P21_06_circle ring = { rad, &cen };
	printf("원의 반지름: %g \n", ring.radius);
	printf("원의 중심 [%d, %d] \n", (ring.center)->xpos, (ring.center)->ypos);
	return 0;
}
