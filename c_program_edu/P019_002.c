#include <stdio.h>
#include <stdlib.h>

int P019_002(void)
{
	int seed, i;
	printf("���� �� �Է�: ");
	scanf("%d", &seed);
	srand(seed);     // ������ �ɴ´�.

	for (i = 0; i<5; i++)
		printf("���� ��� : %d \n", rand());	    // ���Ÿ� ��Ȯ�Ѵ�.
	return 0;
}
