#include <stdio.h>
#define  P25_02_HIT_NUM      5

int P25_02(void)
{
#if P25_02_HIT_NUM==5
	puts("��ũ�� ��� HIT_NUM�� ���� 5�Դϴ�.");
#else 
	puts("��ũ�� ��� HIT_NUM�� ���� 5�� �ƴմϴ�.");
#endif 
	return 0;
}
