#include <stdio.h>

char * P024_001_ReadUserName(void)
{
	char name[30];
	printf("What's your name? ");
	gets(name);
	return name;
}

int P024_001(void)
{
	char * name1;
	char * name2;
	name1 = P024_001_ReadUserName();
	printf("name1: %s \n", name1);
	name2 = P024_001_ReadUserName();
	printf("name2: %s \n", name2);
	return 0;
}
