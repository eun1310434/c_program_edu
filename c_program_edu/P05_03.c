#include <stdio.h>

int P05_03(void)
{
	double rad;
	double area;
	printf("���� ������ �Է�: ");
	scanf("%lf", &rad);

	area = rad*rad*3.1415;
	printf("���� ����: %f \n", area);
	return 0;
}