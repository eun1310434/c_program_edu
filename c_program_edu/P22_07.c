#include <stdio.h>

typedef struct P22_07_point
{
	int xpos;
	int ypos;
} P22_07_Point;

int P22_07(void)
{
	P22_07_Point pos1 = { 1, 2 };
	P22_07_Point pos2;
	pos2 = pos1;

	printf("크기: %d \n", sizeof(pos1));
	printf("[%d, %d] \n", pos1.xpos, pos1.ypos);
	printf("크기: %d \n", sizeof(pos2));
	printf("[%d, %d] \n", pos2.xpos, pos2.ypos);
	return 0;
}
