#include <stdio.h>

struct P22_08_point
{
	int xpos;
	int ypos;
};

typedef struct P22_08_point P22_08_Point;

typedef struct P22_08_person
{
	char name[20];
	char phoneNum[20];
	int age;
} P22_08_Person;

int P22_08(void)
{
	P22_08_Point pos = { 10, 20 };
	P22_08_Person man = { "ÀÌ½Â±â", "010-1212-0001", 21 };
	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d \n", man.name, man.phoneNum, man.age);
	return 0;
}
