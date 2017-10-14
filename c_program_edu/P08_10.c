#include <stdio.h>

int P08_10(void)
{
	int num, abs;
	printf("정수 입력: ");
	scanf("%d", &num);

	abs = num>0 ? num : num*(-1);
	printf("절댓값: %d \n", abs);
	return 0;
}