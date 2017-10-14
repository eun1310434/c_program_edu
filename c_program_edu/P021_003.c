#include <stdio.h>

struct P021_003_point
{
	int xpos;
	int ypos;
};

struct P021_003_person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int P021_003(void)
{
	struct P021_003_point pos = { 10, 20 };
	struct P021_003_person man = { "ÀÌ½Â±â", "010-1212-0001", 21 };
	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d \n", man.name, man.phoneNum, man.age);
	return 0;
}
