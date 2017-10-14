#include <stdio.h>

struct P21_05_point
{
	int xpos;
	int ypos;
};

int P21_05(void)
{
	struct P21_05_point pos1 = { 1, 2 };
	struct P21_05_point pos2 = { 100, 200 };
	struct P21_05_point * pptr = &pos1;

	(*pptr).xpos += 4;
	(*pptr).ypos += 5;
	printf("[%d, %d] \n", pptr->xpos, pptr->ypos);

	pptr = &pos2;
	pptr->xpos += 1;
	pptr->ypos += 2;
	printf("[%d, %d] \n", (*pptr).xpos, (*pptr).ypos);
	return 0;
}
