#include <stdio.h>

typedef int P22_10_INT;
typedef int * P22_10_PTR_INT;

typedef unsigned int P22_10_UINT;
typedef unsigned int * P22_10_PTR_UINT;

typedef unsigned char P22_10_UCHAR;
typedef unsigned char * P22_10_PTR_UCHAR;

int P22_10(void)
{
	P22_10_INT num1 = 120;			// int num1 = 120;
	P22_10_PTR_INT pnum1 = &num1;	// int * pnum1 = &num1;

	P22_10_UINT num2 = 190;		// unsigned int num2 = 190;
	P22_10_PTR_UINT pnum2 = &num2; // unsigned int * pnum2 = &num2;

	P22_10_UCHAR ch = 'Z';	        // unsigned char ch = 'Z';
	P22_10_PTR_UCHAR pch = &ch;	// unsigned char * pch = &ch;

	printf("%d, %u, %c \n", *pnum1, *pnum2, *pch);
	return 0;
}
