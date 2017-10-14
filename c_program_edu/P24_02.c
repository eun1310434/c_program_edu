#include <stdio.h>

char * P24_02_ReadUserName(void)
{
	char name[30];
	printf("What's your name? ");
	gets(name);
	return name;
}

int P24_02(void)
{
	char * name1;
	char * name2;
	name1 = P24_02_ReadUserName();
	printf("name1: %s \n", name1);
	name2 = P24_02_ReadUserName();
	printf("name2: %s \n", name2);
	return 0;
}
