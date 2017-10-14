#include <stdio.h>

int P020_002(void)
{
	int ch;

	while (1)
	{
		ch = getchar();
		if (ch == EOF)
			break;
		putchar(ch);
	}
	return 0;
}
