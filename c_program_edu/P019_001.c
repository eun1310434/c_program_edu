#include <stdio.h>
#include <stdlib.h>

int P019_001(void)
{
	int i;
	printf("������ ����: 0���� %d���� \n", RAND_MAX);
	for (i = 0; i<5; i++)
		printf("���� ���: %d \n", rand());
	return 0;
}