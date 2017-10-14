#include <stdio.h>
#include <math.h>

struct P021_001_point     // ����ü point�� ����  
{
	int xpos;
	int ypos;
};

int P021_001(void)
{
	struct P021_001_point pos1, pos2;
	double distance;

	fputs("point1 pos: ", stdout);
	scanf("%d %d", &pos1.xpos, &pos1.ypos);

	fputs("point2 pos: ", stdout);
	scanf("%d %d", &pos2.xpos, &pos2.ypos);

	/* �� ������ �Ÿ� ��� ���� */
	distance = sqrt((double)((pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos) +
		(pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos)));

	printf("�� ���� �Ÿ��� %g �Դϴ�. \n", distance);
	return 0;
}
