#include <stdio.h>

struct P21_03_point
{
	int xpos;
	int ypos;
	struct P21_03_point * ptr;
};

int P21_03(void)
{
	struct P21_03_point pos1 = { 1, 1 };
	struct P21_03_point pos2 = { 2, 2 };
	struct P21_03_point pos3 = { 3, 3 };

	pos1.ptr = &pos2;     // pos1�� pos2�� ����
	pos2.ptr = &pos3;     // pos2�� pos3�� ����
	pos3.ptr = &pos1;     // pos3�� pos1�� ����

	printf("���� �������... \n");
	printf("[%d, %d]��(��) [%d, %d] ���� \n",
		pos1.xpos, pos1.ypos, pos1.ptr->xpos, pos1.ptr->ypos);
	printf("[%d, %d]��(��) [%d, %d] ���� \n",
		pos2.xpos, pos2.ypos, pos2.ptr->xpos, pos2.ptr->ypos);
	printf("[%d, %d]��(��) [%d, %d] ���� \n",
		pos3.xpos, pos3.ypos, pos3.ptr->xpos, pos3.ptr->ypos);
	return 0;
}
