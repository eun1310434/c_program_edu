/*
ㅁ 일반사항
   ㅇ 제    목: 부호연산의 의미를 갖는 +연산자와 -연산자
   ㅇ 내    용
      ㅡ num1 = -num2; <-부호 연산자의 사용
      ㅡ num1-=  num2; <-복합 대입 연산자의 사용
   ㅇ 파일이름: P003_07.c
   ㅇ 수정날짜
      ㅡ 2017.10.14.(토)
   ㅇ 작 성 자: eun1310434@naver.com
   ㅇ 참조교재: 윤성우의 열혈 C 프로그래밍
*/


#include <stdio.h>

int P003_006(void)
{
	int num1 = +2;
	int num2 = -4;

	num1 = -num1;
	printf("num1: %d \n", num1);
	num2 = -num2;
	printf("num2: %d \n", num2);
	return 0;
}
