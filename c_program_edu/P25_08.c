#include <stdio.h>
#define  P25_08_STRING_JOB(A, B)     #A "�� ������ " #B "�Դϴ�."

int P25_08(void)
{
	printf("%s \n", P25_08_STRING_JOB(�̵���, ������));
	printf("%s \n", P25_08_STRING_JOB(�ѻ��, ��ɲ�));
	return 0;
}