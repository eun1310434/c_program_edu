#include <stdio.h>

void P18_03_ShowAllString(int argc, char * argv[])
{
	int i;
	for (i = 0; i<argc; i++)
		printf("%s \n", argv[i]);
}

int P18_03(void)
{
	char * str[3] = {
		"C Programming",
		"C++ Programming",
		"JAVA Programming"
	};

	P18_03_ShowAllString(3, str);
	return 0;
}