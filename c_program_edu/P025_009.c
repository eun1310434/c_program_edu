#include <stdio.h>
#define  P025_009_STRING_JOB(A, B)     #A "�� ������ " #B "�Դϴ�."

int P025_009(void)
{
	printf("%s \n", P025_009_STRING_JOB(�̵���, ������));
	printf("%s \n", P025_009_STRING_JOB(�ѻ��, ��ɲ�));
	return 0;
}