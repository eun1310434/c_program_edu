#include <stdio.h>
#include <stdlib.h>

char * P24_04_ReadUserName(void)
{
	char * name = (char *)malloc(sizeof(char) * 30);
	printf("What's your name? ");
	gets(name);
	return name;
}

int P24_04(void)
{
	char * name1;
	char * name2;
	name1 = P24_04_ReadUserName();
	printf("name1: %s \n", name1);
	name2 = P24_04_ReadUserName();
	printf("name2: %s \n", name2);

	printf("again name1: %s \n", name1);
	printf("again name2: %s \n", name2);
	free(name1);
	free(name2);
	return 0;
}
