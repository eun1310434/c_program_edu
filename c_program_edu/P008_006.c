#include <stdio.h>

int P008_006(void)
{
	int num, abs;
	printf("���� �Է�: ");
	scanf("%d", &num);

	abs = num>0 ? num : num*(-1);
	printf("����: %d \n", abs);
	return 0;
}