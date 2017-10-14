#include <stdio.h>

struct P022_002_point
{
	int xpos;
	int ypos;
};

typedef struct P022_002_point P022_002_Point;

typedef struct P022_002_person
{
	char name[20];
	char phoneNum[20];
	int age;
} P022_002_Person;

int P022_002(void)
{
	P022_002_Point pos = { 10, 20 };
	P022_002_Person man = { "ÀÌ½Â±â", "010-1212-0001", 21 };
	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d \n", man.name, man.phoneNum, man.age);
	return 0;
}
