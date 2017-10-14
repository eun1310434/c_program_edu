#include <stdio.h>
#define P25_09_PI 3.14
#define P25_09_PRODUCT(X, Y)   ((X)*(Y))
#define P25_09_CIRCLE_AREA(R)  (P25_09_PRODUCT((R), (R))*P25_09_PI)

int P25_09(void)
{
	double rad = 2.1;
	printf("반지름 %g인 원의 넓이: %g \n", rad, P25_09_CIRCLE_AREA(rad));
	return 0;
}
