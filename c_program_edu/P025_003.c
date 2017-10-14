#include <stdio.h>
#define P025_003_PI 3.14
#define P025_003_PRODUCT(X, Y)   ((X)*(Y))
#define P025_003_CIRCLE_AREA(R)  (P025_003_PRODUCT((R), (R))*P025_003_PI)

int P025_003(void)
{
	double rad = 2.1;
	printf("반지름 %g인 원의 넓이: %g \n", rad, P025_003_CIRCLE_AREA(rad));
	return 0;
}
