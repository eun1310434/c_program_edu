#include <stdio.h>

struct P021_006_point
{
	int xpos;
	int ypos;
};

int P021_006(void)
{
	struct P021_006_point pos1 = { 1, 2 };
	struct P021_006_point pos2 = { 100, 200 };
	struct P021_006_point * pptr = &pos1;

	(*pptr).xpos += 4;
	(*pptr).ypos += 5;
	printf("[%d, %d] \n", pptr->xpos, pptr->ypos);

	pptr = &pos2;
	pptr->xpos += 1;
	pptr->ypos += 2;
	printf("[%d, %d] \n", (*pptr).xpos, (*pptr).ypos);
	return 0;
}
