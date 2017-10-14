/*
ㅁ 일반사항
   ㅇ 제    목: 대입연산자(=)와 산술연산자(+,-,*,/%)
   ㅇ 내    용
      ㅡ 이항 연산자(binary operator)
   ㅇ 파일이름: P003_04.c
   ㅇ 수정날짜
      ㅡ 2017.10.14.(토)
   ㅇ 작 성 자: eun1310434@naver.com
   ㅇ 참조교재: 윤성우의 열혈 C 프로그래밍
*/


#include <stdio.h>

int P003_004(void)
{
	int num1 = 9, num2 = 2;
	printf("%d＋%d＝%d \n", num1, num2, num1 + num2);
	printf("%d－%d＝%d \n", num1, num2, num1 - num2);
	printf("%d×%d＝%d \n", num1, num2, num1*num2);
	printf("%d÷%d의 몫＝%d \n", num1, num2, num1 / num2);
	printf("%d÷%d의 나머지＝%d \n", num1, num2, num1%num2);
	return 0;
}
