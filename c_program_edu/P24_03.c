#include <stdio.h>

char P24_03_name[30];

char * P24_03_ReadUserName(void)
{
	printf("What's your name? ");
	gets(P24_03_name);
	return P24_03_name;
}

int P24_03(void)
{
	char * name1;
	char * name2;
	name1 = P24_03_ReadUserName();
	printf("name1: %s \n", name1);
	name2 = P24_03_ReadUserName();
	printf("name2: %s \n", name2);

	printf("name1: %s \n", name1);
	printf("name2: %s \n", name2);
	return 0;
}
