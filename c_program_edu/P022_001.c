#include <stdio.h>

typedef int P022_001_INT;
typedef int * P022_001_PTR_INT;

typedef unsigned int P022_001_UINT;
typedef unsigned int * P022_001_PTR_UINT;

typedef unsigned char P022_001_UCHAR;
typedef unsigned char * P022_001_PTR_UCHAR;

int P022_001(void)
{
	P022_001_INT num1 = 120;			// int num1 = 120;
	P022_001_PTR_INT pnum1 = &num1;	// int * pnum1 = &num1;

	P022_001_UINT num2 = 190;		// unsigned int num2 = 190;
	P022_001_PTR_UINT pnum2 = &num2; // unsigned int * pnum2 = &num2;

	P022_001_UCHAR ch = 'Z';	        // unsigned char ch = 'Z';
	P022_001_PTR_UCHAR pch = &ch;	// unsigned char * pch = &ch;

	printf("%d, %u, %c \n", *pnum1, *pnum2, *pch);
	return 0;
}
