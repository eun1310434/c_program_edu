#include <stdio.h>
#include <stdlib.h>

int P020_011(void)
{
	char str[20];
	printf("정수 입력: ");
	scanf("%s", str);
	printf("%d \n", atoi(str));

	printf("실수 입력: ");
	scanf("%s", str);
	printf("%g \n", atof(str));
	return 0;
}
