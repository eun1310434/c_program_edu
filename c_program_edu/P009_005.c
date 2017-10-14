#include <stdio.h>
int P009_005_AbsoCompare(int num1, int num2);  // 절대값이 큰 정수 반환 
int P009_005_GetAbsoValue(int num);   // 전달인자의 절대값을 반환

int P009_005(void)
{
	int num1, num2;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);
	printf("%d와 %d중 절대값이 큰 정수: %d \n",
		num1, num2, P009_005_AbsoCompare(num1, num2));
	return 0;
}

int P009_005_AbsoCompare(int num1, int num2)
{
	if (P009_005_GetAbsoValue(num1) > P009_005_GetAbsoValue(num2))
		return num1;
	else
		return num2;
}

int P009_005_GetAbsoValue(int num)
{
	if (num<0)
		return num * (-1);
	else
		return num;
}
