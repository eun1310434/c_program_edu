#include <stdio.h>

struct P21_02_point
{
	int xpos;
	int ypos;
};

struct P21_02_person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int P21_02(void)
{
	struct P21_02_point pos = { 10, 20 };
	struct P21_02_person man = { "ÀÌ½Â±â", "010-1212-0001", 21 };
	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d \n", man.name, man.phoneNum, man.age);
	return 0;
}
