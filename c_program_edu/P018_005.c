#include <stdio.h>

void P018_005_ShowAllString(int argc, char * argv[])
{
	int i;
	for (i = 0; i<argc; i++)
		printf("%s \n", argv[i]);
}

int P018_005(void)
{
	char * str[3] = {
		"C Programming",
		"C++ Programming",
		"JAVA Programming"
	};

	P018_005_ShowAllString(3, str);
	return 0;
}