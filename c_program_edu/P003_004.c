/*
�� �Ϲݻ���
   �� ��    ��: ���Կ�����(=)�� ���������(+,-,*,/%)
   �� ��    ��
      �� ���� ������(binary operator)
   �� �����̸�: P003_04.c
   �� ������¥
      �� 2017.10.14.(��)
   �� �� �� ��: eun1310434@naver.com
   �� ��������: �������� ���� C ���α׷���
*/


#include <stdio.h>

int P003_004(void)
{
	int num1 = 9, num2 = 2;
	printf("%d��%d��%d \n", num1, num2, num1 + num2);
	printf("%d��%d��%d \n", num1, num2, num1 - num2);
	printf("%d��%d��%d \n", num1, num2, num1*num2);
	printf("%d��%d�� ��%d \n", num1, num2, num1 / num2);
	printf("%d��%d�� ��������%d \n", num1, num2, num1%num2);
	return 0;
}
