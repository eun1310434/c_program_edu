#include <stdio.h>

typedef struct P022_006_point
{
	int xpos;
	int ypos;
} P022_006_Point;

int P022_006(void)
{
	P022_006_Point pos1 = { 1, 2 };
	P022_006_Point pos2;
	pos2 = pos1;

	printf("ũ��: %d \n", sizeof(pos1));
	printf("[%d, %d] \n", pos1.xpos, pos1.ypos);
	printf("ũ��: %d \n", sizeof(pos2));
	printf("[%d, %d] \n", pos2.xpos, pos2.ypos);
	return 0;
}
