/*
ㅁ 일반사항
   ㅇ 제    목: 덧셈프로그래밍의 완성
   ㅇ 기    능
      ㅡ 덧셈프로그래밍
   ㅇ 파일이름: P003_12.c
   ㅇ 수정날짜
      ㅡ 2017.10.14.(토)
   ㅇ 작 성 자: eun1310434@naver.com
   ㅇ 참조교재: 윤성우의 열혈 C 프로그래밍
*/


#include <stdio.h>

int P003_003(void)
{
	int num1 = 3;
	int num2 = 4;
	int result = num1 + num2;

	printf("덧셈 결과: %d \n", result);
	printf("%d+%d=%d \n", num1, num2, result);
	printf("%d와(과) %d의 합은 %d입니다.\n", num1, num2, result);
	return 0;
}