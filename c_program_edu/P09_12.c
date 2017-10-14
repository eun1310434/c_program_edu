#include <stdio.h>

int P09_12_Add(int num1, int num2)     // 인자전달 (O), 반환 값 (O)
{
	return num1 + num2;
}

void P09_12_ShowAddResult(int num)     // 인자전달 (O), 반환 값 (X)
{
	printf("덧셈결과 출력: %d \n", num);
}

int P09_12_ReadNum(void)     // 인자전달 (X), 반환 값 (O)
{
	int num;
	scanf("%d", &num);
	return num;
}

void P09_12_HowToUseThisProg(void)     // 인자전달 (X), 반환 값 (X)
{
	printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
	printf("자! 그럼 두 개의 정수를 입력하세요. \n");
}

int P09_12(void)
{
	int result, num1, num2;
	P09_12_HowToUseThisProg();
	num1 = P09_12_ReadNum();
	num2 = P09_12_ReadNum();
	result = P09_12_Add(num1, num2);
	P09_12_ShowAddResult(result);
	return 0;
}
