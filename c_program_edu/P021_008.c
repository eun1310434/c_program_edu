#include <stdio.h>

struct P021_008_point
{
	int xpos;
	int ypos;
	struct P021_008_point * ptr;
};

int P021_008(void)
{
	struct P021_008_point pos1 = { 1, 1 };
	struct P021_008_point pos2 = { 2, 2 };
	struct P021_008_point pos3 = { 3, 3 };

	pos1.ptr = &pos2;     // pos1과 pos2를 연결
	pos2.ptr = &pos3;     // pos2와 pos3를 연결
	pos3.ptr = &pos1;     // pos3를 pos1과 연결

	printf("점의 연결관계... \n");
	printf("[%d, %d]와(과) [%d, %d] 연결 \n",
		pos1.xpos, pos1.ypos, pos1.ptr->xpos, pos1.ptr->ypos);
	printf("[%d, %d]와(과) [%d, %d] 연결 \n",
		pos2.xpos, pos2.ypos, pos2.ptr->xpos, pos2.ptr->ypos);
	printf("[%d, %d]와(과) [%d, %d] 연결 \n",
		pos3.xpos, pos3.ypos, pos3.ptr->xpos, pos3.ptr->ypos);
	return 0;
}
