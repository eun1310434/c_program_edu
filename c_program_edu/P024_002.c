#include <stdio.h>

char P024_002_name[30];

char * P024_002_ReadUserName(void)
{
	printf("What's your name? ");
	gets(P024_002_name);
	return P024_002_name;
}

int P024_002(void)
{
	char * name1;
	char * name2;
	name1 = P024_002_ReadUserName();
	printf("name1: %s \n", name1);
	name2 = P024_002_ReadUserName();
	printf("name2: %s \n", name2);

	printf("name1: %s \n", name1);
	printf("name2: %s \n", name2);
	return 0;
}
