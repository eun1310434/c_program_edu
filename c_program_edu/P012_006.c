#include <stdio.h>

int P012_006(void)
{
	char str1[] = "My String";
	char * str2 = "Your String";
	printf("%s %s \n", str1, str2);

	str2 = "Our String";     // ����Ű�� ��� ����
	printf("%s %s \n", str1, str2);

	str1[0] = 'X';
	str2[0] = 'X';
	printf("%s %s \n", str1, str2);
	return 0;
}