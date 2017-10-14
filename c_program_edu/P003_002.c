/*
ㅁ 일반사항
   ㅇ 제    목: 변수의 다양한 선언 및 초기화 방법
   ㅇ 기    능
      ㅡ 선언과 동시에 초기화
	  ㅡ 변수를 선언만 하고 초기화하지 않으면 쓰레기 값이 저장됨.
   ㅇ 파일이름: P003_13.c
   ㅇ 수정날짜
      ㅡ 2017.10.14.(토)
   ㅇ 작 성 자: eun1310434@naver.com
   ㅇ 참조교재: 윤성우의 열혈 C 프로그래밍
*/


#include <stdio.h>

int P003_002(void)
{
	int num1, num2;
	int num3 = 30, num4 = 40;

	//printf("num1: %d, num2: %d \n", num1, num2); //에러 : 변수를 선언만 하고 초기화하지 않으면 쓰레기 값이 저장됨.
	num1 = 10;
	num2 = 20;

	printf("num1: %d, num2: %d \n", num1, num2);
	printf("num3: %d, num4: %d \n", num3, num4);
	return 0;
}
