#include <stdio.h>

int P009_003_Add(int num1, int num2)     // 인자전달 (O), 반환 값 (O)
{
	return num1 + num2;
}

void P009_003_ShowAddResult(int num)     // 인자전달 (O), 반환 값 (X)
{
	printf("덧셈결과 출력: %d \n", num);
}

int P009_003_ReadNum(void)     // 인자전달 (X), 반환 값 (O)
{
	int num;
	scanf("%d", &num);
	return num;
}

void P009_003_HowToUseThisProg(void)     // 인자전달 (X), 반환 값 (X)
{
	printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
	printf("자! 그럼 두 개의 정수를 입력하세요. \n");
}

int P009_003(void)
{
	int result, num1, num2;
	P009_003_HowToUseThisProg();
	num1 = P009_003_ReadNum();
	num2 = P009_003_ReadNum();
	result = P009_003_Add(num1, num2);
	P009_003_ShowAddResult(result);
	return 0;
}
