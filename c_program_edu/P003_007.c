/*
ㅁ 일반사항
   ㅇ 제    목: 증감, 감소 연산자
   ㅇ 수정날짜
      ㅡ 2017.10.14.(토)
   ㅇ 작 성 자: eun1310434@naver.com
   ㅇ 참조교재: 윤성우의 열혈 C 프로그래밍
*/


#include <stdio.h>

int P003_007(void)
{
	int num1 = 12;
	int num2 = 12;

	printf("num1: %d \n", num1);
	printf("num1++: %d \n", num1++);
	printf("num1: %d \n\n", num1);

	printf("num2: %d \n", num2);
	printf("++num2: %d \n", ++num2);
	printf("num2: %d \n", num2);
	return 0;
}
