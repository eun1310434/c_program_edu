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
	printf("���� ������: %g \n", ring.radius);
	printf("���� �߽� [%d, %d] \n", (ring.center)->xpos, (ring.center)->ypos);
	return 0;
}
