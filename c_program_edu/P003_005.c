/*
ㅁ 일반사항
   ㅇ 제    목: 복합 대입 연산자
   ㅇ 내    용
      ㅡ 복합 대입 연산자 *=, /=, %/, +=, -=, <<=, >>=, &=, ^=, \=
   ㅇ 파일이름: P003_08.c
   ㅇ 수정날짜
      ㅡ 2017.10.14.(토)
   ㅇ 작 성 자: eun1310434@naver.com
   ㅇ 참조교재: 윤성우의 열혈 C 프로그래밍
*/

#include <stdio.h>

int P003_005(void)
{
	int num1 = 2, num2 = 4, num3 = 6;
	num1 += 3;	// num1 = num1 + 3;
	num2 *= 4;	// num2 = num2 * 4;
	num3 %= 5;	// num3 = num3 % 5;

	printf("Result: %d, %d, %d \n", num1, num2, num3);
	return 0;
}
