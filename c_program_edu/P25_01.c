#include <stdio.h>
#define  P25_01_HIT_NUM      7

int P25_01(void)
{
#if P25_01_HIT_NUM==5
	puts("��ũ�� ��� HIT_NUM�� ���� 5�Դϴ�.");
#elif P25_01_HIT_NUM==6
	puts("��ũ�� ��� HIT_NUM�� ���� 6�Դϴ�.");
#elif P25_01_HIT_NUM==7
	puts("��ũ�� ��� HIT_NUM�� ���� 7�Դϴ�.");
#else
	puts("��ũ�� ��� HIT_NUM�� 5, 6, 7�� Ȯ���� �ƴմϴ�.");
#endif 

	return 0;
}
